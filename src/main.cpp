#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("\n\n Frank Kufer 000805328");
  Serial.println("\n\n Chip ID: "+String(ESP.getChipId()));
  Serial.println("\n\n Flash Chip ID: "+String(ESP.getFlashChipId()));


}

void loop() {

  Serial.print("\n\nTime: ");
  Serial.println("\n\n"+String(millis()));
  delay(2000); 
}