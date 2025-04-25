# Pin Test
A basic Arduino program that shows reading inputs from analog pins and writing some digital outputs on the digital pins.

The output of the program in the serial monitor will show the outputs change as the analog pin values change.

- `A0` is an analog input, and because it is left floating (not tied to any fixed voltage), the ADC reports random noise. This causes us to see drifting values.
- `2` is a plain `INPUT` that is always reading as `LOW (0)`. `digitalWrite()` is used to mirror the logic on `2`, producing `0`. 