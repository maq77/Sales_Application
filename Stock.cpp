#include "Stock.h"
#pragma once
void Stock::AddProducts(){
char ch;
do{

    cin>>ProductList[count];
    count++;
    cout<<"\nDo You Want to Add More Products to Stock ? (y,n) : ";
    cin>>ch;

}while(ch == 'y' || ch == 'Y');


}
void Stock::ShowProducts(){

for(int i=0;i<count;i++){

    cout<<ProductList[i];

}

}

void Stock::EditProduct(int Product_ID){
for(int i=0;i<count;i++){
if(Product_ID == ProductList[i].getID()){
    cin>>ProductList[i];
}
}
}
void Stock::EditProduct(){
cout<<"\nEnter Product ID : ";
int Product_ID =0;
cin>>Product_ID;
for(int i=0;i<count;i++){
if(Product_ID == ProductList[i].getID()){
    cin>>ProductList[i];
}
}
}
void Stock::SearchProduct(int Product_ID){
for(int i=0;i<count;i++){
if(Product_ID == ProductList[i].getID()){
    cout<<ProductList[i];
}
}
}
void Stock::UpdateQuantity(int Product_ID){
for(int i=0;i<count;i++){
if(Product_ID == ProductList[i].getID()){
    cout<<"\nEnter Product Quantity : ";
    int newquantity=0;
    cin>>newquantity;
    ProductList[i].setQuantity(newquantity);
    break;
}
}
}
void Stock::UpdateQuantity(int Product_ID, int Quantity){
for(int i=0;i<count;i++){
if(Product_ID == ProductList[i].getID()){
    ProductList[i].MinusQuantity(Quantity);
    break;
}
}
}
int Stock::getQuantity(int Product_ID){

for(int i=0;i<count;i++){
if(Product_ID == ProductList[i].getID()){
    return ProductList[i].getQuantity();
    break;
}
}

}
void Stock::MinusProduct_Quantity(int Product_ID,int Quantity)
{

    for(int i=0;i<count;i++){
    if(Product_ID == ProductList[i].getID()){
    return ProductList[i].MinusQuantity(Quantity);
    break;
}
}

}
double Stock::getProductPrice(int Product_ID){

for(int i=0;i<count;i++){
if(Product_ID == ProductList[i].getID()){
    return ProductList[i].getPrice();
    break;
}
}

}
void Stock::DeleteProduct(int Product_ID){

for(int i=0;i<count;i++){
    if(Product_ID == ProductList[i].getID()){
       ProductList[i] = ProductList[count-1];
       count--;
       break;
    }
}


}
void Stock::DeleteProduct(){
cout<<"Enter Product ID : ";
int Product_ID =0;
cin>>Product_ID;
for(int i=0;i<count;i++){
    if(Product_ID == ProductList[i].getID()){
       ProductList[i] = ProductList[count-1];
       count--;
       break;
    }
}


}
