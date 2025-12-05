#include "RGBLed.hpp"
#include "../../../ArduinoLiterals.hpp"

RGBLed::RGBLed(int rPin, int gPin, int bPin)
    : rPin(rPin), gPin(gPin), bPin(bPin)
{
}

void RGBLed::init()
{
        pinMode(rPin, OUTPUT);
        pinMode(gPin, OUTPUT);
        pinMode(bPin, OUTPUT);
}

void RGBLed::light(int rValue, int gValue, int bValue)
{
        if (rValue == 0 && gValue == 0 && bValue == 0)
        {
                m_isLit = false;
        }
        else
        {
                m_isLit = true;
        }

        // Clamping and lighting the rValue
        if (rValue < 255 && rValue >= 0)
        {
                analogWrite(rPin, rValue);
        }
        else if (rValue > 255)
        {
                analogWrite(rPin, 255);
        }
        else if (rValue < 0)
        {
                analogWrite(rPin, 0);
        }

        // Clamping and lighting the gValue
        if (gValue < 255 && gValue >= 0)
        {
                analogWrite(gPin, gValue);
        }
        else if (gValue > 255)
        {
                analogWrite(gPin, 255);
        }
        else if (gValue < 0)
        {
                analogWrite(gPin, 0);
        }

        // Clamping and lighting the bValue
        if (bValue < 255 && bValue >= 0)
        {
                analogWrite(bPin, bValue);
        }
        else if (bValue > 255)
        {
                analogWrite(bPin, 255);
        }
        else if (bValue < 0)
        {
                analogWrite(bPin, 0);
        }
}

void RGBLed::light(float rValue, float gValue, float bValue)
{
        if (rValue == 0 && gValue == 0 && bValue == 0)
        {
                m_isLit = false;
        }
        else
        {
                m_isLit = true;
        }

        rValue = rValue * 255;
        gValue = gValue * 255;
        bValue = bValue * 255;

        // Clamping and lighting the rValue
        if (rValue < 255 && rValue >= 0)
        {
                analogWrite(rPin, (int)rValue);
        }
        else if (rValue > 255)
        {
                analogWrite(rPin, 255);
        }
        else if (rValue < 0)
        {
                analogWrite(rPin, 0);
        }

        // Clamping and lighting the gValue
        if (gValue < 255 && gValue >= 0)
        {
                analogWrite(gPin, (int)gValue);
        }
        else if (gValue > 255)
        {
                analogWrite(gPin, 255);
        }
        else if (gValue < 0)
        {
                analogWrite(gPin, 0);
        }

        // Clamping and lighting the bValue
        if (bValue < 255 && bValue >= 0)
        {
                analogWrite(bPin, (int)bValue);
        }
        else if (bValue > 255)
        {
                analogWrite(bPin, 255);
        }
        else if (bValue < 0)
        {
                analogWrite(bPin, 0);
        }
}

void RGBLed::extinguish()
{
        analogWrite(rPin, 0);
        analogWrite(gPin, 0);
        analogWrite(bPin, 0);
        m_isLit = false;
}

bool RGBLed::isLit() { return m_isLit; }
