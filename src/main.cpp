#include <Arduino.h>
void setup() {
    pinMode(13, OUTPUT);  // Configure pin 13 as an ouput.
    pinMode(A0, INPUT);
    pinMode(2, INPUT);
    Serial.begin(9600);
}

int a = 0;
int b = 0;

void loop() {
    a = analogRead(A0);
    Serial.print("The value read at pin AO = ");
    Serial.println(a);

    b = digitalRead(2); // Read pin 2 -> always 0 (floating).
    Serial.print("The value read at pin 2 = ");  // Writes the 0 or 1 out on pin 13.
    Serial.println(b);

    digitalWrite(13, b);
    delay(1000);

}