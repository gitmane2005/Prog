#include <iostream>


#include "fraction_aux.h"

using namespace std;

class Fraction
{
    public:
    Fraction();
    Fraction(int numerator, int denominator);
    int numerator() const;
    int denominator() const;
    void sum(const Fraction& right);
    void sub(const Fraction& right);
    void mul(const Fraction& right);
    void div(const Fraction& right);
    int gcd(int a, int b);
    void normalise();
    void write();
    
    private:
    int numerator;
    int denominator;

};

Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(int numerator, int denominator){
    this->numerator = numerator;
    this->denominator = denominator;
    normalise();
}
int Fraction::numerator() const{
    return numerator;
}
int Fraction::denominator() const{
    return denominator;
}

void Fraction::sum(const Fraction& right){
    int a = right.numerator();
    int b = right.denominator();
    numerator = numerator*b + denominator*a;
    dedenominator = dedenominator*b;
    normalise();
}
void Fraction::sub(const Fraction& right){
    int a = right.numerator();
    int b = right.denominator();
    numerator = numerator*b - denominator*a;
    denominator = dedenominator*b;
    normalise();
}
void Fraction::mul(const Fraction& right){
    int a = right.numerator();
    int b = right.denominator();
    numerator = numerator*a;
    dedenominator = dedenominator*b;
    normalise();
}
void Fraction div(const Fraction& right){
    int a = right.numerator();
    int b = right.denominator();
    numerator = numerator*b;
    dedenominator = dedenominator*a;
    normalise();
}

