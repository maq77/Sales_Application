#include "Customers.h"

void Customers::AddCustomer(){
char ch2;
do{

cin>>CustomersList[count]; ///Add Customers into a List
count++;
cout<<"\nDo You want to Add Another Customer ? (y,n): "; // choosing to continue ?
cin>>ch2;


}while(ch2 == 'y' || ch2 == 'Y');
}
void Customers::EditCustomer(){
cout<<"\n[Edit Customer]";
cout<<"\nEnter Customer ID : ";
int ID=0;
cin>>ID;
for(int i=0;i<count;i++){
    if(ID == CustomersList[i].getID()){
        cin>>CustomersList[i];
    }
}

}
void Customers::DeleteCustomer(){
cout<<"\n[Delete Customer]";
cout<<"\nEnter Customer ID : ";
int ID=0;
cin>>ID;
for(int i=0;i<count;i++){
    if(ID == CustomersList[i].getID()){
        CustomersList[i] = CustomersList[count-1];
        count--;
        break;
    }
}
}
void Customers::UpdateCustomer()
{
cout<<"\n[Update Customer]";
cout<<"\nEnter Customer ID : ";
int ID=0;
cin>>ID;
for(int i=0;i<count;i++){
    if(ID == CustomersList[i].getID()){
        cin>>CustomersList[i];
        break;
    }
}



}
void Customers::Show(){
cout<<"\n[Show Customers]"<<endl;
for(int i=0;i<count;i++){
    cout<<"\n[Customer] No."<<i+1<<endl;
    cout<<CustomersList[i];
    cout<<endl;

}

}
void Customers::CreatOrder(){
cout<<"\n[ Order No. "<<Orders_count+1<<" ] "<<endl;
OrderList[Orders_count].UpdateOrder_ID(Orders_count+1);
cout<<"\nNote : Order Must be Less Than Product Quantity or it will Throw an Exception !!"<<endl;
cin>>OrderList[Orders_count];
Orders_count++;

}
void Customers::setOrder_Total(double Total)
{

    OrderList[Orders_count-2].setTotal(Total);

}
void Customers::CreatOrder(int OrderNumber)
{
    cout<<"\n[ Order No. "<<Orders_count+1<<" ] "<<endl;
OrderList[OrderNumber].UpdateOrder_ID(OrderNumber+1);
cout<<"\nNote : Order Must be Less Than Product Quantity or it will Throw an Exception !!"<<endl;
cin>>OrderList[OrderNumber];
Orders_count++;

}
void Customers::EditOrder()
{
cout<<"\n[Edit Order] ";
cout<<"\nEnter Order ID : ";
int ID=0;
cin>>ID;
for(int i=0;i<Orders_count;i++){
    if(ID == OrderList[i].getOrder_ID()){
        cin>>OrderList[i];
    }
}

}
void Customers::DeleteOrder()
{
cout<<"\n[Delete Order]";
cout<<"\nEnter Order ID : ";
int ID=0;
cin>>ID;
for(int i=0;i<Orders_count;i++){
    if(ID == OrderList[i].getOrder_ID()){
        OrderList[i] = OrderList[Orders_count-1];
        Orders_count--;
        break;
    }
}

}
void Customers::DeleteOrder(int OrderNumber)
{
    for(int i=0;i<Orders_count;i++){
    if(OrderNumber == OrderList[i].getOrder_ID()){
        OrderList[i] = OrderList[Orders_count-1];
        Orders_count--;
        break;
    }
}
}
void Customers::ShowOrders(){
for(int i=0;i<Orders_count;i++)
{
cout<<"\n[ Order No. "<<i+1<<" ] "<<endl;
cout<<OrderList[i];
}
}
void Customers::UpdateStatus(int Order_ID, int Status){

for(int i=0;i<Orders_count;i++){
    if(Order_ID == OrderList[i].getOrder_ID()){
        OrderList[i].setStatus(Status);
        break;
    }
}

}
void Customers::PayOrder(int Order_ID)
{

    for(int i=0;i<Orders_count;i++){
    if(Order_ID == OrderList[i].getOrder_ID()){
        OrderList[i].PayOrder();
        break;
    }
}

}
void Customers::setOrder_Total(int Order_ID, double Total )
{
    for(int i=0;i<Orders_count;i++){
    if(Order_ID == OrderList[i].getOrder_ID()){
        OrderList[i].setTotal(Total);
        break;
    }
}
}
Customers::~Customers(){

//delete [] CustomersList;

}
