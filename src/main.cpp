#include <Arduino.h> 

 

int LED = 12; 

 

void setup() 

{ 

  Serial.begin(9600);     // Start serial communication 

  pinMode(LED, OUTPUT);   // Set the LED pin as an output 

 

  // Print the initial user menu 

  Serial.println("--- Arduino Calculator ---"); 

  Serial.println("Send '1' to Sum two numbers"); 

  Serial.println("Send '2' to Multiply two numbers"); 

} 

 

void blink(int ledPin) 

{ 

  digitalWrite(ledPin, HIGH); 

  delay(500); // Wait for 500 milliseconds 

  digitalWrite(ledPin, LOW); 

  delay(500); // Wait for 500 milliseconds (this was missing) 

} 

 

void sum() 

{ 

  Serial.println("\n--- SUM Operation ---"); 

  Serial.println("Please enter two numbers (e.g., '10 20'):"); 

 

  // Wait until data is available to read 

  while (Serial.available() < 1) { 

    // Just wait for user input 

  } 

 

  // Read the two integers 

  int num1 = Serial.parseInt(); 

  int num2 = Serial.parseInt(); 

 

  // Print the result 

  Serial.print("Result: "); 

  Serial.print(num1); 

  Serial.print(" + "); 

  Serial.print(num2); 

  Serial.print(" = "); 

  Serial.println(num1 + num2); 

 

  // Print the menu again 

  Serial.println("\nSend '1' for Sum, '2' for Multiply"); 

} 

 

void performMultiply() 

{ 

  Serial.println("\n--- MULTIPLY Operation ---"); 

  Serial.println("Please enter two numbers (e.g., '5 4'):"); 

 

  // Wait until data is available to read 

  while (Serial.available() < 1) { 

    // Just wait for user input 

  } 

 

  // Read the two integers 

  int num1 = Serial.parseInt(); 

  int num2 = Serial.parseInt(); 

 

  // Print the result 

  Serial.print("Result: "); 

  Serial.print(num1); 

  Serial.print(" * "); 

  Serial.print(num2); 

  Serial.print(" = "); 

  Serial.println(num1 * num2); 

 

  // Print the menu again 

  Serial.println("\nSend '1' for Sum, '2' for Multiply"); 

} 

 

void checkUserChoice() 

{ 

  // Check if the user has sent any data 

  if (Serial.available() > 0) { 

    // Read the incoming character 

    char choice = Serial.read(); 

 

    // Decide which operation to perform 

    if (choice == '1') { 

      sum(); 

    } else if (choice == '2') { 

      performMultiply(); 

    } 

    // Note: Any other characters are ignored. 

    // We also flush any extra serial data (like the newline character) 

    // to prevent it from being read as the next "choice". 

    while(Serial.available() > 0) { 

      Serial.read(); 

    } 

  } 

} 

 

void loop() 

{ 

  // Blink the LED to show the program is running 

  blink(LED); 

 

  // Check if the user has selected an operation 

  checkUserChoice(); 

} 