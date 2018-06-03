/*
   echo script

*/

byte incomingByte;

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(3, 2); // RX | TX

void setup() {
  BTSerial.begin(115200);
}

void loop() {
  if (BTSerial.available()) {
    incomingByte = BTSerial.read();
    BTSerial.print(incomingByte);
    if (incomingByte == 114)
      BTSerial.print("Hello");

  }
}
