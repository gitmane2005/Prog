#include <iostream>
#include "interval.h"
using namespace std;
bool after(time_of_day a, time_of_day b){
    if(a.h > b.h || (a.h == b.h && a.m >= b.m)) return true;
    else return false;}

bool after1(time_of_day a, time_of_day b){
    if(a.h > b.h || (a.h == b.h && a.m > b.m)) return true;
    else return false;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u){
    bool in_interval = false;
    u = {t , t};
    for(int i = 0; i<n; i++){
        if(after(t, a[i].start) && after1(a[i].end, t)){
            u.start = (after(a[i].start, u.start)) ? u.start : a[i].start;
            u.end = (after(a[i].end, u.end)) ? a[i].end : u.end;
            in_interval = true;
        }
    }
    if(!in_interval){
        u = {t, t};
        return 0;
    }
    else{
        return (u.end.h - u.start.h - 1)*60 + (60 - u.start.m + u.end.m);
    }
}




int main(){
    { const int n = 5;
  const time_of_day t = { 15, 15 };
  const interval a[n] { { { 12, 30 }, { 14, 30 } },
                  { { 14, 30 }, { 15, 30 } },
                  { { 15, 10 }, { 16, 10 } },
                  { {  9, 30 }, { 15, 15 } },
                  { {  9, 45 }, { 15, 16 } } };
  interval u;
  int d = search_intervals(t, a, n, u);
  cout << d << ' ' << u << '\n'; }
  return 0;
}