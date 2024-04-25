#include <iostream>
#include <iomanip>
#include "ResaleProduct.h"
using namespace std;
int main(){ const ResaleProduct p1(10001, 2.5f, 10);
  cout << fixed << setprecision(2)
       << p1.get_id() << ' ' 
       << p1.get_profit_margin() << ' ' 
       << p1.get_sell_price() << endl; }