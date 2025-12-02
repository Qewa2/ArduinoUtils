#include "Button.hpp"
#include "../../ArduinoLiterals.hpp"

Button::Button(int pin) : pin(pin) {}

void Button::init() { pinMode(pin, INPUT_PULLUP); }

void Button::update()
{
        m_previousIsPressed = m_isPressed;
        if (digitalRead(pin) == LOW)){
        m_isPressed = true;
    }
        else if (digitalRead(pin) == HIGH)
        {
                m_isPressed = false;
        }
}

bool isPressed() { return m_isPressed; }

bool isJustPressed()
{
        if (m_isPressed == true && m_previousIsPressed == false)
        {
                return true;
        }
        else
        {
                return false;
        }
}

bool isJustReleased()
{
        if (m_isPressed == false && m_previousIsPressed == true)
        {
                return true;
        }
        else
        {
                return false;
        }
}
