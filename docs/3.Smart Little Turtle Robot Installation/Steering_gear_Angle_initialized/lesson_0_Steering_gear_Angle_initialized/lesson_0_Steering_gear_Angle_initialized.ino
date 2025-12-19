//*****************************************************************
/*
Set the 90-degree code,Copy the code and upload it to the development board. The steering gear connected to port D10 will rotate to 90 °
*/
const int servopin = 10;//set the pin of servo to D10
int myangle; //the angle variable of servo
int pulsewidth; // pulse width variable of servo
void setup() {
  servopulse(servopin,180); //set the angle of servo to 0°
  delay(1000);
  servopulse(servopin,0); // tell servo to go to position in variable 90°
  delay(1000);
  servopulse(servopin,90); // tell servo to go to position in variable 90°
  delay(1000);
}
void loop() {

}

// function to control servo
void servopulse(int servopin,int myangle)//the running angle of servo
{
  for(int i=0; i<20; i++)
  {
    pulsewidth = (myangle*11)+500;
    digitalWrite(servopin,HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(servopin,LOW);
    delay(20-pulsewidth/1000);
  }  
}
//*****************************************************************
