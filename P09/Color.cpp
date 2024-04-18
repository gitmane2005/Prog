#include <iostream>
#include "Color.h"

using namespace std;
// const Color Color::RED(250, 0, 0);
// const Color Color::GREEN(0, 250, 0);
// const Color Color::BLUE(0, 0, 250);
// const Color Color::BLACK(0, 0, 0);
// const Color Color::WHITE(250, 250, 250);

Color::Color(unsigned char red, unsigned char green, unsigned char blue){
    r = red;
    g = green;
    b = blue;
}
Color::Color(const Color& c){
    r = c.red();
    g = c.green();
    b = c.blue();
}
    // accessor
unsigned char Color::red() const{
    return r;
}
unsigned char Color::green() const{
    return g;
}
unsigned char Color::blue() const{
    return b;
}

    //member function
bool Color::equal_to(const Color& other) const{
    if( r == other.r && g == other.g && b == other.b){
        return true;
    }
    return false;
}
void Color::invert(){
    r = 255 - r;
    g = 255 - g;
    b = 255 - b;
}