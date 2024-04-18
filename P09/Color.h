#ifndef COLOR_H
#define COLOR_H

#include <iostream>
using namespace std;

class Color
{
private:
    unsigned char r;
    unsigned char g;
    unsigned char b;
public:
    // constructor with parameters
    Color(unsigned char red, unsigned char green, unsigned char blue);
    Color(const Color& c);

    static const Color RED, GREEN, BLUE, BLACK, WHITE;
    // accessor
    unsigned char red() const;
    unsigned char green() const;
    unsigned char blue() const;

    //member function
    bool equal_to(const Color& other) const;
    void invert();
};
const Color Color::RED(255, 0,0);
const Color Color::GREEN(0, 255,0);
const Color Color::BLUE(0, 0, 255);
const Color Color::BLACK(0, 0 ,0);
const Color Color::WHITE(255, 255, 255);

#endif