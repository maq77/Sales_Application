#include "Order.h"

istream & operator>>(istream &cin, Order &o){
cout<<"\n [ Order ID ][  "<<++o.id<<" ] ";
cout<<"\nEnter Customer ID : ";
cin>>o.Customer_ID;
cout<<"\nEnter Product ID : ";
cin>>o.Product_ID;
cout<<"\nEnter Quantity : ";
cin>>o.quantity;
cout<<"\nEnter Order Status (New : 0 (Default) , HOLD : 1 , Paid : 2 , Canceled : 3 ) : ";
cin>>o.OrderStatus;
cout<<"\nEnter Date (DD/MM/YYYY ) : ";
cin>>o.date;

return cin;
}
ostream & operator<<(ostream &cout, Order &o){
cout<<"\nOrder ID : "<<o.id
    <<"\nProduct ID : "<<o.Product_ID
    <<"\nQuantity : "<<o.quantity;
    switch(o.OrderStatus)
    {
        case 0:
            o.OrderStatusS = "New";
            break;
        case 1:
            o.OrderStatusS = "Hold";
            break;
        case 2:
            o.OrderStatusS = "Paid";
            break;
        case 3:
            o.OrderStatusS = "Canceled";
            break;

    }
    cout<<"\nOrder Status: "<<o.OrderStatusS
        <<"\nPaid By : "<<o.payment;
    cout<<"\nDate : "<<o.date
    <<"\nTotal : "<<o.Total<<endl;


return cout;
}
void Order::PayOrder()
{

    cout<<"\n[ Payment Info ]"<<endl;
    cout<<"\n1- Pay By Credit Card "
        <<"\n2- Pay By Check "
        <<"\n3- Pay Cash On Delivery ";
        int ch;
        cin>>ch;
        switch(ch)
        {
        case 1:
            payment = "Credit Card";
            break;
        case 2:
            payment = "Check";
            break;
        case 3:
            payment = "Cash on Delivery";
            break;
        }
        OrderStatus = 2;


}
int Order::getProduct_ID(){

return Product_ID;
}
int Order::getOrder_ID(){

return id;

}
void Order::setStatus(int newStatus){

OrderStatus = newStatus;

}
