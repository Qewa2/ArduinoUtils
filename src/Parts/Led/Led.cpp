#include "Led.hpp"
#include "../../ArduinoLiterals.hpp"

Led::Led(int Pin) : pin(Pin) {}

void Led::init() { pinMode(pin, OUTPUT); }

void Led::light()
{
        m_isLit = true;
        digitalWrite(pin, HIGH);
}

void Led::extinguish()
{
        m_isLit = false;
        digitalWrite(pin, LOW);
}

void Led::switchState()
{
        m_isLit = !m_isLit;
        if (m_isLit == true)
        {
                digitalWrite(pin, HIGH);
        }
        else if (m_isLit == false)
        {
                digitalWrite(pin, LOW);
        }
}

bool Led::isLit() { return m_isLit; }
