#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int prev=0;
int current=1;
int sum=0;
void setup() {
  lcd.init();
  pinMode(9,INPUT);
  Serial.begin(9600);
  Serial.println("The no.of Obstacles are: ");
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("No.of Obstacles");
}

void loop() {
  prev=current;
  lcd.setCursor(7,1);
  current=digitalRead(9);
  if(prev==1 && current==0){
    sum=sum+1;
    Serial.println(sum);
  }
  lcd.print(sum);
  delay(100);
}