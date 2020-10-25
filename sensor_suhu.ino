#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
int sensor_Pin = A0;
int nilai_ADC_sensor = 0;

void setup() {
lcd.begin(20,4);
lcd.setCursor(0,0);
lcd.print("Monitoring suhu");
lcd.setCursor(0,1);
lcd.print("Telekomunikasi PNJ");
delay(2000);
lcd.clear();
}

void loop() {
nilai_ADC_sensor=analogRead(sensor_Pin);
double Celcius=((5.0/1024.0)*analogRead(sensor_Pin))*100;
lcd.setCursor(0,2);
lcd.print("SUHU RUANGAN");
lcd.setCursor(0,3);
lcd.print(Celcius);
lcd.setCursor(6,3);
lcd.print((char)223);
lcd.setCursor(7,3);
lcd.print("C");
}
