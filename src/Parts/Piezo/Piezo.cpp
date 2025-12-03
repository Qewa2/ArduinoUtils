#include "Piezo.hpp"

Piezo::Piezo(int pin) : pin(pin) {}

void Piezo::init() { pinMode(pin, OUTPUT); }

void Piezo::play(int frequency)
{
        m_frequency = frequency;
        tone(pin, frequency);
}

void Piezo::play(int frequency, int length)
{
        m_frequency = frequency;
        tone(pin, frequency, length);
        m_frequency = 0;
}

int Piezo::getFrequency() { return m_frequency; }
