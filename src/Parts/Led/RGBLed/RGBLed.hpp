#ifndef RGBLED_HPP
#define RGBLED_HPP

#include "../../Part.hpp"

class RGBLed : public Part
{
    public:
        int rPin;
        int gPin;
        int bPin;

        RGBLed(int rPin, int gPin, int bPin);
        virtual void init() override;
        void light(int rValue, int gValue, int bValue);
        void light(float rValue, float gValue, float bValue);
        void extinguish();
        bool isLit();

    private:
        bool m_isLit = false;
};

#endif
