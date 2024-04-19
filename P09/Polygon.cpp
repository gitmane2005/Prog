#include <iostream>
#include <vector>
#include "Polygon.h"
#include "Point.h"
using namespace std;
Polygon::Polygon(){
    val = {};
}

Polygon::Polygon(vector<Point> input){
    for(Point in : input){
        val.push_back(in);
    }
}
bool Polygon::add_vertex(size_t pos, Point add){
    if(pos < 1 || pos > (val.size())){return false;}
    val.insert(val.begin() + (pos-1), add);
    return true;
}

bool Polygon::get_vertex(size_t pos, Point& p){
    if(pos < 1 || pos > val.size()){return false;}
    p = val[pos-1];
    val.erase(val.begin() + (pos-1));
    return true;
}
double Polygon::perimeter() const{
    double result = 0;
    for(size_t i = 0; i < val.size()-1; i++){
        result += val[i].distance(val[i+1]);
    }
    result += val[0].distance(val[val.size()-1]);
    return result;
}

void Polygon::show() const{
    cout << '{';
    for(Point t : val){
        t.show();
    }
    cout << '}';
}