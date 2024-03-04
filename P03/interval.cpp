#include <iostream>
#include "interval.h"
using namespace std;

bool after(time_of_day a, time_of_day b){
    if(a.h > b.h || (a.h == b.h && a.m >= b.m)) return true;
    else return false;
}
interval intersection(interval a, interval b){
  interval r;
  if (after(b.start, a.end) || after(a.start, b.end)){
    return {{0,0},{0,0}};
  }
  r.start = (after(a.start, b.start)) ? a.start : b.start;
  r.end = (after(a.end, b.end)) ? b.end : a.end;
  return r;
}
