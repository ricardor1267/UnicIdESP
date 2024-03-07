#include <esp_system.h>

void setup() {
  Serial.begin(115200);
  uint64_t chipId = ESP.getEfuseMac();
  Serial.printf("ID del Chip ESP32: %04X", (uint16_t)(chipId >> 32));
  Serial.printf("%08X\n", (uint32_t)chipId);
}

void loop() {
  // Tu código principal aquí...
}