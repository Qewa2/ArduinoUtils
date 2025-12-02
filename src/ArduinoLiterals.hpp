#ifndef ARDUINO_LITERALS_HPP
#define ARDUINO_LITERALS_HPP

#define ARDUINO_LITERALS
#ifdef ARDUINO_LITERALS
#define OUTPUT

#define INPUT

#define INPUT_PULLUP

#define HIGH 1

#define LOW 0

#define pinMode(x, y)                                                          \
        {                                                                      \
        }
#define digitalWrite(x, y)                                                     \
        {                                                                      \
        }

#define digitalRead(x) (HIGH)

#endif

#endif
