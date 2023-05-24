#ifndef ORDER_H
#define ORDER_H
#include "item.h"
#include <iostream>
using namespace std;
enum Order_Status {NEW=0, HOLD=1, PAID=2, CANCELED=3};
class Order
{
    public:
        friend istream & operator>>(istream &cin, Order &o);
        friend ostream & operator<<(ostream &cout, Order &o);
        void PayOrder();
        int getProduct_ID();
        int getOrder_ID();
        void UpdateOrder_ID(int NewID){this->id += NewID;}
        int getCustomerID(){return Customer_ID;}
        int getQuantity(){return quantity;}
        void setStatus(int);
        void setTotal(double Total){this->Total = Total;}

    protected:
        int id=1000000;
        int Customer_ID;
        int Product_ID;
        int OrderStatus=0;
        string payment="None";
        string OrderStatusS="";
        double Total;
        int quantity=0;
        int date;
        item item;

};

#endif // ORDER_H
