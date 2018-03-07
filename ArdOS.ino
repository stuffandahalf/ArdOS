#include "input.h"
#include "display.h"

//char *history[50];
int history_ind = 0;

//LCD *lcd;
Display *display;

void setup() {
    display = new Display();
    Serial.begin(9600);
}

void loop() {
    
}

void serialEvent() {
    char c = Serial.read();
    /*if(c == 'c') {
        lcd->clear();
        lcd->print("test");
    }*/
    //display->print(c);
    display->putChar(c);
    //Serial.println(c, HEX);
}
