#ifndef POWER_H
#define POWER_H

#include <iostream>
#include "Operation.h"

class Power : public Operation{
public:
    Power(int op1_, int op2_);
    int operation();
};

Power::Power(int op1_, int op2_): Operation(op1_, op2_){}
int Power::operation(){
    return (get_op1() + get_op2());
}

#endif