/* HackyRacersV30_TestOut_Loop
 
Loops the two pwm for demo of HackyRacers
 
 The circuit:
 * 
 
 
 created 2015
 by Luis Dinis
 This example code is in the public domain.

 
  */



const int velPin1 = 10;
const int velPin2 = 11;
int vel = 0;
int stepspeed = 240;
int prvStepspeed = 0;




long interval = 1000;          

void setup() {
  // set the digital pin as output:
  pinMode(velPin1, OUTPUT);
  pinMode(velPin2, OUTPUT);


  Serial.begin(9600);
}

void loop()
{
  unsigned long currentMillis = millis();
  


  Serial.print(vel);
  Serial.print(" ");
  Serial.println(stepspeed);
  analogWrite(velPin2, stepspeed);
  analogWrite(velPin1, stepspeed);
  stepspeed=stepspeed+5;
  delay(1000);
   if (stepspeed>245) stepspeed =240; // FordT
   // if (stepspeed>145) stepspeed =145; // Enzo 
}

