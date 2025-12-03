#ifndef SENSOR_HPP
#define SENSOR_HPP

#include "../Part.hpp"

class Sensor : public Part
{
    public:
        virtual void update()      = 0;
        virtual float measure()    = 0;
        virtual float measureRaw() = 0;
};

#endif // !SENSOR_HPP
