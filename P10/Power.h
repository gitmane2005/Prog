#ifndef POWER_H
#define POWER_H

#include <iostream>
#include <cmath>
#include "Operation.h"
using namespace std;

class Power : public Operation{
public:
    Power(int op1_, int op2_);
    int operation() const override;
};

Power::Power(int op1_, int op2_): Operation(op1_, op2_){}
int Power::operation() const{
    return pow(get_op1(), get_op2());
}

#endif