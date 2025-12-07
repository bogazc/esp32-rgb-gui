#include <Arduino.h>
#define LED_BLUE 21
#define LED_GREEN 22
#define LED_RED 23

char coming_data = '\0';

void setup() {
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);

  digitalWrite(LED_BLUE, LOW);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_RED, LOW);

  Serial.begin(921600);
}

void loop() {
  if(Serial.available() > 0) {
    coming_data = Serial.read();
    if(coming_data == 'r') {
        digitalWrite(LED_RED, HIGH); 
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_BLUE, LOW);   
    } else if(coming_data == 'g') {
        digitalWrite(LED_RED, LOW); 
        digitalWrite(LED_GREEN, HIGH);        
        digitalWrite(LED_BLUE, LOW);  
    } else if(coming_data == 'b') {
        digitalWrite(LED_RED, LOW); 
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_BLUE, HIGH);   
    } else if(coming_data == 'y') {
        digitalWrite(LED_RED, HIGH);
        digitalWrite(LED_GREEN, HIGH);
        digitalWrite(LED_BLUE, LOW);
    } else if(coming_data == 'm') {
        digitalWrite(LED_RED, HIGH);
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_BLUE, HIGH);    
    } else if(coming_data == 'c') {
        digitalWrite(LED_RED, LOW);
        digitalWrite(LED_GREEN, HIGH);
        digitalWrite(LED_BLUE, HIGH);      
    } else if(coming_data == 'w') {
        digitalWrite(LED_RED, HIGH);
        digitalWrite(LED_GREEN, HIGH);
        digitalWrite(LED_BLUE, HIGH);       
    } else if(coming_data == 'k') {
        digitalWrite(LED_RED, LOW);
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_BLUE, LOW);       
    } else if(coming_data == 'q') {
        digitalWrite(LED_RED, LOW);
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_BLUE, LOW);
    }
    delay(1000);
  }
}