#include <LiquidCrystal.h>
// RS, RW, E, D0, D1, D2, D3, D4, D5, D6, D7 
LiquidCrystal lcd(12,11,10,2,3,4,5,6,7,8,9);

void setup(){
    lcd.begin(16,2);
    lcd.print("I like Shirley");
}

void loop(){
    lcd.setCursor(0, 1);
    lcd.print(millis() / 1000);
}
