
const int Trigger = 2;
const int Echo = 15;
long d;
  

void distancia(){
    /* Get a new sensor event */ 
   long t;
   
   digitalWrite(Trigger,HIGH);
   delayMicroseconds(10);
   digitalWrite(Trigger,LOW);
   t=pulseIn(Echo,HIGH);
   d=t/59;
  
  Serial.println(d);
  Serial.println("");

  delay(500);
}

