#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int vibrationPin = 2;
const int ledPin = 8;
const int buzzerPin = 9;
bool vibrationDetected = false;
unsigned long lastCheck = 0;
const int checkInterval = 50;
void setup() {
pinMode(vibrationPin, INPUT);
pinMode(ledPin, OUTPUT);
pinMode(buzzerPin, OUTPUT);
lcd.init();
lcd.backlight();
Serial.begin(9600);
lcd.setCursor(0, 0);
lcd.print(" Earthquake ");
lcd.setCursor(0, 1);
lcd.print(" Detector ");
delay(1000);
lcd.clear();
}
void loop() {
if (millis() - lastCheck >= checkInterval) {
lastCheck = millis();
int vibrationState = digitalRead(vibrationPin);
if (vibrationState == HIGH) {
vibrationDetected = true;
} else {
vibrationDetected = false;
}
}
if (vibrationDetected) {
lcd.setCursor(0, 0);
lcd.print("Earthquake Detected ");
lcd.setCursor(0, 1);
lcd.print("Vibration: HIGH");
digitalWrite(ledPin, HIGH);
digitalWrite(buzzerPin, HIGH);
delay(500);
digitalWrite(ledPin, LOW);
digitalWrite(buzzerPin, LOW);
delay(500);
} else {
lcd.setCursor(0, 0);
lcd.print("You are Safe ");
lcd.setCursor(0, 1);
lcd.print("Vibration: LOW ");
digitalWrite(ledPin, LOW);
digitalWrite(buzzerPin, LOW);
}
}