#include <LiquidCrystal.h>

LiquidCrystal lcd( 4, 6, 10, 11, 12, 13 );

void setup() {
  lcd.begin( 16, 2 );
  lcd.clear();
  lcd.setCursor(0, 0);
  for(int i = 0; i < 5; i++){
    lcd.print("standby");
    delay(1000);
    lcd.clear();
    delay(200);
  }
  lcd.setCursor(4, 1);
  lcd.print("complete");
}

void loop() {

}
