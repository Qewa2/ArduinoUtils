#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "../Part.hpp"

class Button : public Part
{
    public:
        int pin;

        Button(int pin);
        virtual void init() override;
        void update();
        bool isPressed();
        bool isJustPressed();
        bool isJustReleased();

    private:
        bool m_isPressed         = false;
        bool m_previousIsPressed = false;
};

#endif
