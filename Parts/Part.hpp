#ifndef PARTS_HPP
#define PARTS_HPP

class Part {
  public:
    const int pin;
    virtual void init() = 0;

  private:
};

#endif // !PARTS_HPP
