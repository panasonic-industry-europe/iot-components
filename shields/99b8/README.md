# Passive Interface Shield (99b8)
![Passive Interface Shield (99b8)](../../assets/outline-99b8.png)

Links sensor and switch breakout boards to Arduino UNO, SoC module board and power supply shields. Breakout board supply voltage can be chosen to be 3,3 or 5 V. A jumper is used for voltage selection.

* The D0 to D5 ports connect to Arduino UNO D0 to D5 GPIOs.
* The A0 to A5 ports connect to Arduino UNO A0 to A5 analog inputs.
* The two I2C ports are duplicates. The I2C pins connect to Arduino UNO SCL and SDA pins.
* Arduino UNO I2C interface: SCL pin = A5 pin, SDA pin = A4 pin
* Other boards' I2C interface: Please, refer to respective documentation.
* The SPI port connects to Arduino UNO SPI pins.

**ATTENTION**

**The PAN1780 board uses 3,3 V GPIO levels.**

**The original Arduino UNO uses 5 V GPIO levels.**

