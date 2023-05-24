#ifndef PRODUCT_H
#define PRODUCT_H
#include"item.h"
#include<iostream>
using namespace std;
//class item;
//friend class item;
class Product
{
    public:
        friend class item;
        friend istream & operator>>(istream &cin, Product &p);
        friend ostream & operator<<(ostream &cout, Product &p);
        Product operator=(Product &p);
        void setQuantity(int newQuantity);
        void MinusQuantity(int MinusQuantity){this->quantity -= MinusQuantity;}
        int getQuantity();
        double getPrice(){return price;}
        void Update();
        void Delete();
        int getID();
    protected:
        int id;
        string name;
        int type;
        double price;
        int quantity;

};

#endif // PRODUCT_H
