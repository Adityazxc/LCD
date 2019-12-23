#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(0, 1, 2, 3, 4, 5);


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16,2);
 
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.clear();//mengosongkan karakter pada LCD dahulu
  lcd.setCursor(2,0);//atur kursor pada kolom 0 dan baris ke
  lcd.print("Hello World");
   lcd.setCursor(3,1);
  lcd.print("awoakwoak");

  delay(1000);

}
