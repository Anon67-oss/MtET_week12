#include <Arduino.h>

#define LED_PIN 2

void setup()
{
    Serial.begin(115200);

    pinMode(LED_PIN, OUTPUT);

    Serial.println("ESP32 started!");
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(3000);

    digitalWrite(LED_PIN, LOW);
    delay(3000);
}