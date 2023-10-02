#include <Arduino.h>
#include "Keyboard.h"

#define KEYL 8
#define KEYR 9

void setup() {
  // put your setup code here, to run once:
  pinMode(KEYL, INPUT_PULLUP);
  pinMode(KEYR, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(KEYL)==LOW){
    Keyboard.press(' ');
  }else{
    Keyboard.release(' ');
  }
  if(digitalRead(KEYR)==LOW){
    Keyboard.press(KEY_F15);
  }else{
    Keyboard.release(KEY_F15);
  }
  
}
