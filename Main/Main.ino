#include "sensado.h"
#include "Ubidots.h"

#define LED 2
#define BT 5
//Inicializacion Ubidots libreria//
const char* UBIDOTS_TOKEN = "BBFF-B3opm3LHhAYXD5KlZcGkIggTt0VuFB";      // Put here your Ubidots TOKEN
const char* WIFI_SSID = "Note10";                                         // Put here your Wi-Fi SSID
const char* WIFI_PASS = "123456789";                                   // Put here your Wi-Fi password
unsigned char stade;


Ubidots ubidots(UBIDOTS_TOKEN, UBI_HTTP);

//***************//

void setup(){
  pinMode(LED,OUTPUT);
  pinMode(BT,INPUT);
  Serial.begin(115200);
  ubidots.wifiConnect(WIFI_SSID, WIFI_PASS);
  //~~~~~~~~SENSOR DISTANCIA~~~~~~~~~~~//
  pinMode (Trigger,OUTPUT);
  pinMode(Echo,INPUT);
  digitalWrite(Trigger,LOW);
  
}


void loop(){
  int lec=digitalRead(BT);
  
  distancia();
  if(lec==HIGH){
    float value1=d;
    ubidots.add("Variable_Name_One",value1);
    bool bufferSent=false;
    bufferSent= ubidots.send();
    if (bufferSent) {
      // Do something if values were sent properly
      
      if(stade==1){
        digitalWrite(LED,LOW);
        stade=0;
      }else{
        digitalWrite(LED,HIGH);
        stade=1;
      }
      
      Serial.println("Values sent by the device");
    }
  }
  delay(100);
}
