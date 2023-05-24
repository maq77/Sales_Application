#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"Company.h"
#include"Person.h"
#include <iostream>
using namespace std;

class Customer : public Person, public Company
{
    public:
        friend istream & operator>>(istream &cin, Customer &c);
        friend ostream & operator<<(ostream &cout, Customer &c);
        Customer operator=(Customer &obj);
        int getID();

    protected:
        int id;
        int phone;
        int ch; //in order to know whether this customer is person or company


};

#endif // CUSTOMER_H
