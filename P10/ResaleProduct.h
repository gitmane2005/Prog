#ifndef __RESALEPRODUCT_H__
#define __RESALEPRODUCT_H__
#include <iostream>
#include "Product.h"

class ResaleProduct: public Product{
private:
    int profit_margin;
public:
    ResaleProduct(int id, float price, int profit);
    int get_profit_margin() const;
    void set_profit_margin(int margin);
    float get_sell_price() const override;
};
ResaleProduct::ResaleProduct(int id, float price, int profit):
    Product(id, price),profit_margin(profit) {}

int ResaleProduct::get_profit_margin() const{
    return profit_margin;
}
void ResaleProduct::set_profit_margin(int margin){
    profit_margin = margin;
}

float ResaleProduct::get_sell_price() const {
    return price_*((100+profit_margin)/100.0);
}


#endif

