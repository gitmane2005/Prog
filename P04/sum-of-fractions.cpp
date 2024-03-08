#include <iostream>
#include "fraction.h"
using namespace std;

int greatest(int a, int b){
    while(b != 0){
        int tem = b;
        b = a%tem;
        a = tem;
    }
    return a;
}

fraction sum(const fraction fa[], int n){
    fraction result = {fa[0].num,fa[0].den};
    for(int i = 1; i < n; i++){
        result.num = result.num*fa[i].den + result.den*fa[i].num;
        result.den = result.den*fa[i].den;
    }
    int c = greatest(max(result.num, result.den), min(result.num, result.den));
    result = {result.num/c, result.den/c};
    if(result.den<0){
        result.num = -1*result.num;
        result.den = -1*result.den;
    }
    return result;
}
