#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() 
{
  char a[8];
  Serial.begin(9600);
  Serial.write(a);
  Serial.println("04052520 bill");
  lcd.begin(20, 2);
  lcd.setCursor(0,0);
  lcd.print("04052520 bill");
  lcd.setCursor(0,1);
  lcd.write(a);
}
void loop() 
{
  if(Serial.available())
  {
    delay(100);
    lcd.clear();
    while(Serial.available()>0)
    {
      lcd.write(Serial.read());
    }
  }
}
