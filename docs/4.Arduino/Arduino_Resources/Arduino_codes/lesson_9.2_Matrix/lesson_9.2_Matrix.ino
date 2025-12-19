/*
  keyes 
  Print “Hello Keyes!”
  http://www.keyesrobot.com
*/
void setup() {  
    // put your setup code here, to run once:
    Serial.begin(9600);  //Set the serial port baud rate to 9600
}

void loop() {  
    // put your main code here, to run repeatedly:
    Serial.println("Hello Keyes!");  //Serial port printing
 	delay(1000);  //Delay of 1 second
}