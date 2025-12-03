#ifndef LED_HPP
#define LED_HPP

#include "../Part.hpp"

class Led : public Part
{
    public:
        int pin;

        Led(int Pin);
        virtual void init() override;
        void light();
        void extinguish();
        void switchState();
        bool isLit();

    private:
        bool m_isLit = false;
};

#endif
