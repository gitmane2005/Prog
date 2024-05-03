#include <iostream>
#include <vector>
#include <iomanip>
#include "MovingAverage.h"
using namespace std;
MovingAverage::MovingAverage(std::size_t n){
    n_ = n;
}

void MovingAverage::update(double value){
    if(values_.size() >= n_){
        values_.pop_front();
        values_.push_back(value);
    }
    else{
        values_.push_back(value);
    }
}

double MovingAverage::get() const{
    double sum = 0;
    for (auto it = values_.begin(); it != values_.end(); ++it){
        sum += *it;
    }
    return sum/values_.size();    
}

// int main(){
// { MovingAverage ma(2);
//   double a[] { 1.2, 3.4, 5.0 };
//   for (double x : a) {
//     ma.update(x);
//     cout << fixed << setprecision(2) <<  ma.get() << ' ';
//   }
//   cout << fixed << setprecision(2) <<  ma.get() << '\n'; }
//   return 0;
// }