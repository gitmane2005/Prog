#include <iostream>
#include <vector>
#include <iomanip>
#include "MovingAverage.h"
using namespace std;
MovingAverage::MovingAverage(std::size_t n){
    n_ = n;
}

void MovingAverage::update(double value){
    if(values_.size() > n_){
        values_.pop_front();
        values_.push_back(value);
    }
}

double MovingAverage::get() const{
    auto itr = values_.begin();
    double sum = 0;
    while (itr != values_.end()){
        itr++;
        sum += *itr;
    }
    return sum/n_;    
}

int main(){
    { MovingAverage ma(1);
  const MovingAverage& r = ma;
  ma.update(1.0);
  cout << fixed << setprecision(2) << r.get() << '\n'; }
  return 0;
}






