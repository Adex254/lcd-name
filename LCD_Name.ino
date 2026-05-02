#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Try 0x27 first. If blank, change to 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // ✅ Fix for ESP32 I2C (very important)
  Wire.begin(21, 22);  // SDA = GPIO21, SCL = GPIO22

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("ADEOYE");

  lcd.setCursor(0, 1);
  lcd.print("ESP32 TEST");
}

void loop() {
}
