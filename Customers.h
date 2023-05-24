#ifndef CUSTOMERS_H
#define CUSTOMERS_H
#include<iostream>
#include "Order.h"
#include "Customer.h"

using namespace std;

class Customers : public Customer
{
    public:
         void AddCustomer();
         void EditCustomer();
         void DeleteCustomer();
         void UpdateCustomer();
         ///////////////////////////////
         void CreatOrder();
         void CreatOrder(int OrderNumber);
         void EditOrder();
         void DeleteOrder();
         void DeleteOrder(int OrderNumber);
         void PayOrder(int Order_ID);
         ////////////////////////
         void ShowOrders();
         void Show();
         ////////////////////////
         void setOrder_Total(double Total);
         void setOrder_Total(int Order_ID, double Total);
         void UpdateStatus(int,int); ///int order id , int order status
         int getOrder_ID(int OrderNumber){return OrderList[OrderNumber-1].getOrder_ID(); }
         int getOrderProductID(int OrderNumber){return OrderList[OrderNumber-1].getProduct_ID();}
         int getOrderCount(){return Orders_count;}
         int getOrderNumber(){return Orders_count;} //Same as Order Count
         int getOrderQuantity(int OrderNumber){return OrderList[OrderNumber-1].getQuantity();}
         ~Customers();
    protected:
       Order OrderList[10];
       Customer CustomersList[10]; ///Customers list default 10
       int count=0;
       int Orders_count = 0;

};

#endif // CUSTOMERS_H
