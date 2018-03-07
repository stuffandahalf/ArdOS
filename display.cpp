#include "display.h"
#include <Arduino.h>

Display::Display() : LiquidCrystal(8, 9, 4, 5, 6, 7) {
    begin(ROWS, COLS);
}

void Display::newLine() {
    setCursor(0, 1);
}

void Display::putChar(char c) {
    if(c == '\r') {
        newLine();
    }
    else {
        print(c);
    }
}

/*size_t print(const char*str) {
    if(str[0] == '\n') {
        
    }
}*/

/*LiquidCrystal *displayInit() {
    LiquidCrystal *display = new LiquidCrystal(8, 9, 4, 5, 6, 7);
    display->begin(16, 2);
    return display;
}*/
