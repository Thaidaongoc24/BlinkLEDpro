#include <Arduino.h>
#include "OneButton.h"

const int led1Pin = 13; 
const int led2Pin = 12; 
const int buttonPin = 14; 

OneButton button(buttonPin, true);
bool controlLed1 = true;
bool isLongPressActive = false;

void click() {
    digitalWrite(controlLed1 ? led1Pin : led2Pin, !digitalRead(controlLed1 ? led1Pin : led2Pin));
}

void doubleClick() {
    controlLed1 = !controlLed1;
}

void longPress() {
    isLongPressActive = true;
}

void longPressStop() {
    isLongPressActive = false;
    digitalWrite(controlLed1 ? led1Pin : led2Pin, LOW);
}

void setup() {
    pinMode(led1Pin, OUTPUT);
    pinMode(led2Pin, OUTPUT);
    button.attachClick(click);
    button.attachDoubleClick(doubleClick);
    button.attachLongPressStart(longPress);
    button.attachLongPressStop(longPressStop);
    button.setLongPressIntervalMs(1000);
}

void loop() {
    button.tick();
    if (isLongPressActive) {
        digitalWrite(controlLed1 ? led1Pin : led2Pin, HIGH);
        delay(200);
        digitalWrite(controlLed1 ? led1Pin : led2Pin, LOW);
        delay(200);
    }
}
