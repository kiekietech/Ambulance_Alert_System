/* Some part of the code is ommitted to ensure patent search process goes on smoothly
but the code is readily available from our side if required in one on one discussion with esteemed jury */

#include <VirtualWire.h>

#define button //Confidential as we are going to apply for a patent for the same. 

char *data;
int val;
int value = 0;

void setup() 
{
  Serial.begin(9600);
  vw_set_tx_pin(//Confidential as we are going to apply for a patent for the same.;
  vw_setup(2000);
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  val = digitalRead(button);
  if(val == LOW && value == 0)
  {
//    Confidential as we are going to apply for a patent for the same.
  }
  else if(val == LOW && value == 1)
  {
    // Confidential as we are going to apply for a patent for the same.
  }
  delay(200);
}