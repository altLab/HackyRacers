/*
Based on 

Several Sources & friends 
HackyRacers V2 - 

Module for 
Detecting speed with a foot stepper
Decting mode: EncoderStrip with OpAmp
Fernando Carvalho & Luis Dinis altLab (c) (2015)


*/

// constants won't change. They're used here to
// set pin numbers:

const int buttonPin = 2;     // the number of the pushbutton pin


unsigned long u=0;
unsigned long v=0;
unsigned long x=0;
const int velPin01 = 10;
const int velPin02 =11;



void setup() {

 pinMode(buttonPin, INPUT);
 pinMode(velPin01, OUTPUT);
 pinMode(velPin02, OUTPUT);
 attachInterrupt(digitalPinToInterrupt(buttonPin), conta, RISING);
 Serial.begin(230400);
}

void loop() {


   Serial.print(" vel= ");
   Serial.println(u); 
   analogWrite(velPin01, u);
   //analogWrite(velPin02, u);

if (u >= 10) {
  delay(2);
  u=u-1;
}

v=v+1;
    
}
  
  

void conta(){
noInterrupts();

if (u <=255) {
  if ( u < 180 ){ 
     u = u + 1;}
  u=u+1;
  }
  
interrupts();
}
 
 
  
 
 


