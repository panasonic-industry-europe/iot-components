# Indoor Solar Energy Harvesting Power Management Shield (ac2f)
![Indoor Solar Energy Harvesting Power Management Shield (ac2f)](../../assets/outline-ac2f.png)

Connects to an amorphous solar cell, converts voltage levels, stores harvested energy and powers low-power applications.

* Sets maximum power point (MPP) of solar cell automatically according to lighting conditions.
* Converts voltage levels using step-up (cell to storage) and step-down (storage to load) converters using [Panasonic industrial low-profile power inductors](https://industry.panasonic.eu/products/components/inductors-coils/industrial-power-inductors?utm_campaign=iot-components&utm_medium=github&utm_source=page-ac2f).
* Stores energy in super capacitor.
* Provides 1,8 V to Arduino UNO 3,3 V pin for powering low-voltage boards once super capacitor has been charged to 2,3 V.

**ATTENTION**

**Make sure to use boards and shields capable of operation at 1,8 V.**

**The PAN1780 board can work of 1,8 V supplied to 3,3 V pin. Any external power such as USB connections should be disconnected when shield is attached.**

**The original Arduino UNO requires 5 V supplied to 5 V pin for safe operation.**
