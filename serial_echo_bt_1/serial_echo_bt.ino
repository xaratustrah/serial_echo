/*
   echo script

*/

byte incomingByte;

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(3, 2); // RX | TX

void setup() {
  BTSerial.begin(115200);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    incomingByte = Serial.read();
    BTSerial.print((char)incomingByte);
  }

  if (BTSerial.available()) {
    incomingByte = BTSerial.read();
    Serial.print((char)incomingByte);
  }
}
