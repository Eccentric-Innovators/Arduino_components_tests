#include <SoftwareSerial.h>

SoftwareSerial BT(2,3);

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  Serial.println("Bluetooth Started...\nPlease connect...");
}

void loop() {
  if(BT.available()) {
    String data = BT.readString();
    Serial.print("Received from BT: ");
    Serial.println(data);
  }
  if(Serial.available()) {
    String data = Serial.readString();
    BT.print("Received from serial: ");
    BT.println(data);
  }
}
