#include "sensado.h"


#define LED 2
#define BT 15
void setup(){
  pinMode(LED,OUTPUT);
  pinMode(BT,INPUT)
  Serial.begin(115200);
}
void loop(){
  int lec=digitalRead(BT);
  if(lec==HIGH){

  }
//hola
  if (bufferSent) {
    // Do something if values were sent properly
    digitalWrite(LED,HIGH)
    Serial.println("Values sent by the device");
  }
}
