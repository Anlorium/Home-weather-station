#include<SoftwareSerial.h>
SoftwareSerial BtSerial(11,10);

void setup(){
  pinMode(9, OUTPUT);
  digitalWrite(9, HIGH);
  Serial.begin(9600);
  Serial.println("Enter at commands");
  BtSerial.begin(38400);
}

void loop(){
  if(BtSerial.available()){
    Serial.write(BtSerial.read());
  }
  if(Serial.available()){
    BtSerial.write(Serial.read());
  }
}
