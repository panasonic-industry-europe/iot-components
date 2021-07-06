# Particulate Matter Sensor (57ca)

* Panasonic SN-GCJA5 particulate matter (PM) sensor
* Simultaneous readout of PM1.0, PM2.5 and PM10 concentration

| Pin | Symbol | Function       |
|-----|--------|----------------|
| 1   | N.C.   | Not connected  |
| 2   | SDA    | Data           |
| 3   | SCL    | Clock          |
| 4   | GND    | Ground         |
| 5   | VDD    | Supply voltage |

**ATTENTION**

**The PM sensor is capable of I2C and UART operation. Here, the I2C interface is used.**

**The sensor uses 5 V supply voltage. The logic levels of its I2C interface are 3,3 V. Level converters are needed to use the sensor with original Arduino UNO with 5 V logic levels.**

