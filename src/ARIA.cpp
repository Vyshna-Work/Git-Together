#include <Arduino.h>

// put function declarations here:
int multiply(int x, int y){
  return x * y;
}

void loop() {
  if (Serial.available() > 0) {
    int num1 = Serial.parseInt();
    int num2 = Serial.parseInt();
    int product = multiply(num1, num1);

    Serial.print(num1);
    Serial.print("multiplied by");
    Serial.print(num2);
    Serial.print("equals");
    Serial.print(product);
  }
}