#include <iostream>
#include "time_of_day.h"
using namespace std;
time_of_day tick(time_of_day t){
    if(t.m == 59){
      if(t.h == 23){
        t.h = 0;
        t.m = 0;
      }
      else{
        t.h++;
        t.m = 0;
      }
    }
    else
      t.m++;
  return t;
}