
const int Trigger = 2;
const int Echo = 15;


void setup(void) 
{
  Serial.begin(9600);

  //ultra-------------------------------
  pinMode (Trigger,OUTPUT);
  pinMode(Echo,INPUT);
  digitalWrite(Trigger,LOW);
  //------------------------------------


}


void distancia(){
    /* Get a new sensor event */ 
   long t;
   long d;
  
   digitalWrite(Trigger,HIGH);
   delayMicroseconds(10);
   digitalWrite(Trigger,LOW);
   t=pulseIn(Echo,HIGH);
   d=t/59;
  
  Serial.println(d);
  Serial.println("");

  delay(500);
}


void loop(void) 
{
distancia();
}