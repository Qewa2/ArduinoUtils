#include "../Part.hpp"

class Piezo : public Part
{
    public:
        int pin;

        Piezo(int pin);
        virtual void init() override;
        void play(int frequency);
        void play(int frequency, int length);
        int getFrequency();

    private:
        int m_frequency;
};
