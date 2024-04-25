#ifndef SUM_H
#define SUM_H

#include <iostream>
#include "Operation.h"

class Sum : public Operation{
public:
    Sum(int op1_, int op2_);
    int operation();
};

Sum::Sum(int op1_, int op2_): Operation(op1_, op2_){}
int Sum::operation(){
    return (get_op1() + get_op2());
}


#endif