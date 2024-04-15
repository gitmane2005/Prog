#include <iostream>


using namespace std;

class Fraction
{
    public:
    Fraction();
    Fraction(int numerator, int denominator);
    int get_numerator() const;
    int get_denominator() const;
    Fraction sum(const Fraction& right);
    Fraction sub(const Fraction& right);
    Fraction mul(const Fraction& right);
    Fraction div(const Fraction& right);
    int gcd(int a, int b);
    void normalise();
    void write() const;
    
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
int Fraction::get_numerator() const{
    return numerator;
}
int Fraction::get_denominator() const{
    return denominator;
}

Fraction Fraction::sum(const Fraction& right){
    int a = right.numerator;
    int b = right.denominator;
    int res_numerator = numerator*b + denominator*a;
    int res_denominator = denominator*b;
    Fraction res(res_numerator,res_denominator);
    res.normalise();
    return res;
}
Fraction Fraction::sub(const Fraction& right){
    int a = right.numerator;
    int b = right.denominator;
    int res_numerator = numerator*b - denominator*a;
    int res_denominator = denominator*b;
    Fraction res(res_numerator,res_denominator);
    res.normalise();
    return res;
}
Fraction Fraction::mul(const Fraction& right){
    int a = right.numerator;
    int b = right.denominator;
    int res_numerator = numerator*a;
    int res_denominator = denominator*b;
    Fraction res(res_numerator,res_denominator);
    res.normalise();
    return res;
}
Fraction Fraction::div(const Fraction& right){
    int a = right.numerator;
    int b = right.denominator;
    int res_numerator = numerator*b;
    int res_denominator = denominator*a;
    Fraction res(res_numerator,res_denominator);
    res.normalise();
    return res;
}


//! Compute the gcd of two numbers.
int Fraction::gcd(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}

//! Normalize a fraction.
void Fraction::normalise() {
  int g = gcd(numerator, denominator);
  numerator /= g;
  denominator /= g;
  if (denominator < 0) {
    numerator = - numerator;
    denominator = - denominator;
  }
}

// shows fraction on the screen
void Fraction::write() const {
  cout << numerator << '/' << denominator;
}