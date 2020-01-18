#include "Adafruit_CCS811.h"

Adafruit_CCS811 ccs;

const int LED = 13;
const int CO2_LIMIT = 3500;
const int TVOC_LIMIT = 550;

void setup()
{
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
  Serial.println("CCS811 test");

  if (!ccs.begin())
  {
    Serial.println("Failed to start sensor! Please check your wiring.");
    while (1)
      ;
  }

  //calibrate temperature sensor
  while (!ccs.available())
    ;
  float temp = ccs.calculateTemperature();
  ccs.setTempOffset(temp - 25.0);
}

void loop()
{
  if (ccs.available())
  {
    float temp = ccs.calculateTemperature();
    if (!ccs.readData())
    {
      Serial.print("CO2: ");
      Serial.print(ccs.geteCO2());
      Serial.print("ppm, TVOC: ");
      Serial.print(ccs.getTVOC());
      Serial.print("ppb   Temp:");
      Serial.println(temp);

      if ((ccs.geteCO2() > CO2_LIMIT) && (ccs.getTVOC() > TVOC_LIMIT))
      {
        digitalWrite(LED, HIGH);
      }
      else
      {
        digitalWrite(LED, LOW);
      }
    }
    else
    {
      Serial.println("ERROR!");
      while (1)
        ;
    }
  }
  delay(500);
}
