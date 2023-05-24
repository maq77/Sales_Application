#include "Sys.h"
//#pragma once
Sys::Sys()
{
    cout<<"\n\t\t [    Welcome To Sales Application !   ]"<<endl;
}
Sys::~Sys()
{

delete CustomersList;
delete S;


}
void Sys::AddCustomers()
{

    CustomersList->AddCustomer();

}
void Sys::AddProducts()
{

    S->AddProducts();

}
void Sys::ShowCustomers()
{
    CustomersList->Show();

}
void Sys::ShowProducts()
{

    S->ShowProducts();

}

void Sys::AddOrder() //Add Order Must Be Smaller than Stock With An Exception
{
try
{
CustomersList->CreatOrder();
int Order_Quantity = CustomersList->getOrderQuantity(CustomersList->getOrderCount()-1); /// Order Quantity
int Order_Product_ID = CustomersList->getOrderProductID(CustomersList->getOrderCount()-1); //Order ID  (product)
int Product_Quantity = S->getQuantity(Order_Product_ID); // Stock Quantity
int Order_ID = CustomersList->getOrder_ID(CustomersList->getOrderCount()-1);  //Order ID
cout<<"Order ID :"<<++Order_ID<<endl;
double Product_Price = S->getProductPrice(Order_Product_ID);
Total = Product_Price * double(Order_Quantity);
//CustomersList->setOrder_Total(Order_ID,Total);
CustomersList->setOrder_Total(Order_ID-1,Total);
S->MinusProduct_Quantity(Order_Product_ID,Order_Quantity);
if(Order_Quantity >= Product_Quantity ) //if order Quantity is bigger than product quantity, throw an Exception
{
    throw "Warning : Order Quantity is Bigger Than What Stock Have ! ";
    CustomersList->DeleteOrder(Order_ID-1);
}
else
{

S->UpdateQuantity(Order_Product_ID, Order_Quantity);
}
}
catch(const char *msg)
{
    cout<<msg<<endl;
}
cout<<Total;
//CustomersList->setOrder_Total(Order_ID,Total);
}

void Sys::ShowOrders()
{

    CustomersList->ShowOrders();

}


void Sys::DeleteCustomer()
{

CustomersList->DeleteCustomer();

}
void Sys::UpdateCustomer()
{

    CustomersList->UpdateCustomer();

}
void Sys::UpdateOrder()
{
    CustomersList->EditOrder();
}
void Sys::UpdateProduct()
{
    S->EditProduct();
}
void Sys::UpdateOrderStatus()
{
    cout<<"\n[  Update Order Status  ]"<<endl;
    cout<<"\nEnter Order ID : ";
    int Order_ID=0;
    cin>>Order_ID;
    cout<<"\nEnter Order Status (New : 0 (default) , Hold : 1 , Paid : 2 , Canceled : 3 ): ";
    int Order_Status=0;
    cin>>Order_Status;
    CustomersList->UpdateStatus(Order_ID,Order_Status);


}
void Sys::DeleteProduct()
{
    S->DeleteProduct();
}
void Sys::DeleteOrder()
{

    CustomersList->DeleteOrder();

}
void Sys::PayOrder()
{
   cout<<"\nEnter Order ID : ";
   int Order_ID=0;
   cin>>Order_ID;
   CustomersList->PayOrder(Order_ID);



}
