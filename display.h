#ifndef DISPLAY_H
#define DISPLAY_H

#include <LiquidCrystal.h>

#define COLS 16
#define ROWS 2

class Display : public LiquidCrystal {
private:
    int cursorX;
    int cursorY;
    void newLine();
    
public:
    Display();
    //size_t print(const char *str);
    void putChar(char c);
};


#endif
