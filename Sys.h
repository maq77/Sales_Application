#ifndef SYS_H
#define SYS_H
#include<iostream>
#include"Customers.h"
#include"Stock.h"

using namespace std;

class Sys
{
    public:
        Sys();
        ~Sys();
        ///////////////////////////////////Add

        void AddCustomers();
        void AddProducts();
        void AddOrder();

        ////////////////////////////////Delete

        void DeleteCustomer();
        void DeleteProduct();
        void DeleteOrder();
        /////////////////////////////////Pay Order

        void PayOrder();

        ////////////////////////////////Update

        void UpdateCustomer();
        void UpdateOrder();
        void UpdateProduct();
        void UpdateOrderStatus();

        ///////////////////////////////////Show
        void ShowCustomers();
        void ShowProducts();
        void ShowOrders();


    protected:

    private:
        Customers *CustomersList = new Customers;

        Stock *S = new Stock;
        double Total;
};

#endif // SYS_H
