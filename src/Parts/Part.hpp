#ifndef PARTS_HPP
#define PARTS_HPP

class Part
{
    public:
        virtual ~Part()     = default;
        virtual void init() = 0;
};

#endif // !PARTS_HPP
