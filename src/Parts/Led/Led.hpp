#ifndef LED_HPP
#define LED_HPP

#include "../Part.hpp"

class Led : public Part
{
    public:
        bool isLit = false;
        int pin;

        Led(int Pin) : pin(Pin) {}
        virtual void init() override;
        void light();
        void extinguish();
        void switchState();
};

#endif
