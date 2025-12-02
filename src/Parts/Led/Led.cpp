#include "Led.hpp"
#include "../../ArduinoLiterals.hpp"

Led::Led(int Pin) : pin(Pin) {}

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
