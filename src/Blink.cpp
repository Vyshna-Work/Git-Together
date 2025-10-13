#include <Arduino.h>
int LED = 12;
void setup(){

    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

void loop(){
    digitalWrite(LED,HIGH);
    delay(600);
    digitalWrite(LED, LOW);
}