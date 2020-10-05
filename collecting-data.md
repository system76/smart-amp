# Collecting initialization data

There is a TAS5825M driver in the System76 fork of coreboot, but each board
must add the code to initialize the device.

Items required:

- Saleae logic analyzer
- Saleae Logic 2
- Micro SMD grabber test clips

Be sure to unplug the battery before starting.

## Attaching test clips

It may not be feasible to probe the TAS5825M chip itself. Instead look for the
MOSFET that connects to the I2C clock and data lines, which will also be shown
on the Smart AMP page in the schematics. Locating the MOSFET package on the
board would be the next challenge.

For example:

- oryp5: Q55, located next to the SATA connector
- oryp6: Q54, located above the M.2 drive slot

In both these examples, pin 1 connects to the clock line and pin 4 connects to
the data line. Attach a test clip to each pin, ensuring that they do not
contact any other pins.

Perform a literal smoke test. With the battery unplugged, plug in the AC
adapter and power on the machine. If there are any signs of being
misconfigured, such as a burning smell, immediately remove power and then
carefully remove the test clips.

## Capturing the probe

In Saleae Logic 2, configure a capture using a rate of >4 MS/s and a timer
between 5 and 10 seconds.

Start the capture and then power on the machine. When complete, power off the
board and remove AC power.

In Logic 2, hide the unneeded channels and then save the capture to a file.
Attempt to add an I2C analyzer with "Stream to terminal" enabled. Logic 2 may
get stuck trying to analyze. If it does, close Logic 2 and reopen it.

## Parsing the data

Copy the output from the Logic 2 terminal to a new file named `<board>.txt` in
the repo. Parse the output into the format expected by the other scripts.

```
./parse.sh <board>.txt
```

Use the `amp-c.sh` and `amp-rs.sh` scripts to generate the C and Rust files.

```
./amp-c.sh <board>.txt > <board>.c
./amp-rs.sh <board>.txt > <board>.rs
```

## Adding to coreboot

Copy the generated C file to the board directory in coreboot as `tas5825m.c`.
Modify `Makefile.inc` to add the new file to ramstage. Finally, select
`DRIVERS_I2C_TAS5825M` in the board config.

The board should now build with the smart amp driver. Flash the new firmware
and test the speakers.
