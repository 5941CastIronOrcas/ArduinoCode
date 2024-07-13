//HCSR04 ultrasonic sensors by gamegine, makes sure library is installed
#include <HCSR04.h>

HCSR04 hc(12, 10); //initialisation class HCSR04 (trig pin , echo pin)

void setup()
{
  Serial.begin(500000);
}

void loop() {
  
  //read serial, and save it into cbd variable
  byte cbd = Serial.read();

  //If you recieved 0x2e byte run following function
  if (cbd == 0x2e) 
  {
    Serial.print("s");
    Serial.print(hc.dist());
    Serial.print("e");
  }

  //delay to prevent any errors in readings from sonic sensor.
  delay(100);

}