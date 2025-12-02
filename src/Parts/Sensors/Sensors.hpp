#ifndef SENSORS_HPP
#define SENSORS_HPP

#include "../Part.hpp"

class Sensor : public Part
{
    public:
        virtual void update()   = 0;
        virtual float measure() = 0;
};

#endif // !SENSORS_HPP
