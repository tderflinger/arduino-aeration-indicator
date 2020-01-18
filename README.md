# Arduino-Aeration-Indicator

## Description

The [CCS811 sensor](https://ams.com/ccs811) from [ams](https://ams.com) is used to measure indoor air quality.
It can sense CO2 and TVOC. This simple project uses the CCS811 sensor
and the Arduino Uno to light an LED when the CO2 and TVOC levels
surpass a certain configurable threshold.
This signals that the room should be aerated.


## Installation

Install the *Adafruit CCS811 Library" from the Arduino IDE Library Manager.

Open the ccs811-voc/ccs811-voc.ino file the Arduino IDE and upload sketch.


## Permission Denied Problem

If you get USB permission error in the Arduino IDE when uploading the sketch under Linux,
try the following:

```bash
sudo usermod -a -G dialout $USER

sudo chmod a+rw /dev/ttyUSB0
```

## Components

* CCS811 sensor on Joy-it breakout board
* Arduino Uno
* Led
* Cables

## License
 MIT License
 