/* Some part of the code is ommitted to ensure patent search process goes on smoothly
but the code is readily available from our side if required in one on one discussion with esteemed jury */

#include <LiquidCrystal.h>
#include <VirtualWire.h>
#define ledPin //Confidential as we are going to apply for a patent for the same.
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int Time = 90; 

void setup() {
  Serial.begin(9600);
  vw_set_rx_pin(//Confidential as we are going to apply for a patent for the same.;
  vw_setup(2000);
  pinMode(//Confidential as we are going to apply for a patent for the same;
  vw_rx_start();
  //rec end
 pinMode(//Confidential as we are going to apply for a patent for the same;
 Serial.begin(9600);
 lcd.begin(16,2);
 lcd.clear();
}

void loop() {
  uint8_t buf[VW_MAX_MESSAGE_LEN];
uint8_t buflen = VW_MAX_MESSAGE_LEN;

  lcd.clear();
 lcd.print("T- ");
 Serial.println("T- ");

if(vw_get_message(buf, &buflen))
{
  if(//Confidential as we are going to apply for a patent for the same
  {
     if(//Confidential as we are going to apply for a patent for the same
     {
    digitalWrite(//Confidential as we are going to apply for a patent for the same;
    lcd.print("AMBULANCE");
 Serial.println("AMBULANCE");
 }
 else {
 lcd.print(//Confidential as we are going to apply for a patent for the same;
 Serial.print(//Confidential as we are going to apply for a patent for the same;
 
 Serial.print("\n");}
 delay(1000);
 digitalWrite(//Confidential as we are going to apply for a patent for the same;

 while(//Confidential as we are going to apply for a patent for the same
 Time=90;
 
 Time=Time-1;
  }
  
}
else{
  lcd.print(//Confidential as we are going to apply for a patent for the same;
  Serial.print(//Confidential as we are going to apply for a patent for the same;
  delay(1000);
 while(//Confidential as we are going to apply for a patent for the same
  Time=90;
  Time=Time-1;
}

}