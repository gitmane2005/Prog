#ifndef SUM_H
#define SUM_H

#include <iostream>
#include "Operation.h"
using namespace std;

class Sum : public Operation{
public:
    Sum(int op1_, int op2_);
    int operation() const override;
};

Sum::Sum(int op1_, int op2_): Operation(op1_, op2_){}
int Sum::operation() const{
    return (get_op1() + get_op2());
}


#endif