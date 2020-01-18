# Arduino-Aeration-Indicator


## Permission Denied Problem

If you get USB permission error in the Arduino IDE when uploading the sketch under Linux,
try the following:

```bash
sudo usermod -a -G dialout $USER

sudo chmod a+rw /dev/ttyUSB0
```

## License
 MIT License
 