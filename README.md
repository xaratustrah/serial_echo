# serial echo bluetooth

Arduino serial echo over bluetooth using HC-05 module. Please note that some HC-05 modules need an extra wire from PIN34 to VCC in order to set them into the AT Command Mode as described [here](http://www.instructables.com/id/AT-command-mode-of-HC-05-Bluetooth-module/), the hardware button provided does not set them to the AT command mode fully. Maybe this is a firmware bug that will be removed later.

Please also do not forget to provide a resistor divider from Arduino since it has 5V levels as described [here](http://www.martyncurrey.com/hc-05-zg-b23090w-bluetooth-2-0-edr-modules/).

On Android you can use [Bluetooth Terminal](https://f-droid.org/packages/ru.sash0k.bluetooth_terminal/). 

Information on Arduino Nano boards with the CH340 serial chip can be found [here](http://www.instructables.com/id/Arduino-Nano-CH340/).

Another example of serial echo can be found [here](http://spacetinkerer.blogspot.com/2011/02/serial-port-echo-with-arduino.html).

