# Arduino-Aeration-Indicator

## Description

The [CCS811 sensor](https://ams.com/ccs811) from [ams](https://ams.com) is used to measure indoor air quality.
It can sense CO2 and TVOC. This simple project uses the [CCS811 sensor breakout board](https://www.joy-it.net/en/products/SEN-CCS811V1) from Joy-it
and the Arduino Uno to light an LED when the CO2 and TVOC levels
surpass a certain configurable threshold.
This signals that the room should be aerated.


## Installation

Install the *Adafruit CCS811 Library* from the Arduino IDE Library Manager.

Open the ccs811-voc/ccs811-voc.ino file the Arduino IDE and upload sketch.

## Installation with Arduino-cli

```bash
arduino-cli core install arduino:avr
arduino-cli compile --fqbn arduino:avr:uno ccs811-voc/ccs811-voc
arduino-cli upload -p /dev/ttyUSB0 --fqbn arduino:avr:uno ccs811-voc
```

Replace /dev/ttyUSB0 with whatever port your Arduino Uno is connected to.

## Permission Denied Problem

If you get USB permission error in the Arduino IDE when uploading the sketch under Linux,
try the following:

```bash
sudo usermod -a -G dialout $USER

sudo chmod a+rw /dev/ttyUSB0
```

## Components

* [CCS811 sensor on Joy-it breakout board](https://www.joy-it.net/en/products/SEN-CCS811V1)
* Arduino Uno
* Led
* Cables

## License
 MIT License
 