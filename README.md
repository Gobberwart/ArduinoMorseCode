# ArduinoMorseCode
Morse code generator on the Arduino

Simple sketch that takes a string and converts it to morse code. Output is both LED and buzzer.

You will need:
- Arduino (I used an UNO but any should work)
- Passive buzzer
- LED
- 220Ohm resistor
- Breadboard

I haven't made a circuit diagram but it's pretty simple:
- Buzzer goes to pin 9 and ground
- LED goes to pin 13 and (via the resistor) to ground

TODO:

- Currently the string is hard-coded. I would rather this be input either via serial or otherwise. It'll do for now.
- Find a better way to represent the individual characters. Currently using a switch/case statement, but should be possible to do this with an array of dot/dash (di/dah).
