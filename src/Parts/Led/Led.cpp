#include "Led.hpp"

#define ARDUINO_LITERALS
#ifdef ARDUINO_LITERALS
#define OUTPUT

#define HIGH 1

#define LOW 0

#define pinMode(x, y)                                                          \
        {                                                                      \
        }
#define digitalWrite(x, y)                                                     \
        {                                                                      \
        }

#endif

void Led::init() { pinMode(pin, OUTPUT); }

void Led::light()
{
        isLit = true;
        digitalWrite(pin, HIGH);
}

void Led::extinguish()
{
        isLit = false;
        digitalWrite(pin, LOW);
}

void Led::switchState()
{
        isLit = !isLit;
        if (isLit == true)
        {
                digitalWrite(pin, HIGH);
        }
        else if (isLit == false)
        {
                digitalWrite(pin, LOW);
        }
}
