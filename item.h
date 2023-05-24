#ifndef ITEM_H
#define ITEM_H
#include "Product.h"
#include <iostream>
using namespace std;

class item
{
    public:
        friend class Product;
        void operator++();
        void operator--();
        void operator+=(int);
        void operator-=(int);
        void UpdateQuantity(int);

    protected:
        int quantity=0;

};

#endif // ITEM_H
