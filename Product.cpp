#include "Product.h"

istream & operator>>(istream &cin, Product &p){ ////insert product

cout<<"\nEnter Product ID : ";
cin>>p.id;
cout<<"\nEnter Product Name : ";
cin>>p.name;
cout<<"\nEnter Product Type : ";
cin>>p.type;
cout<<"\nEnter Product Price : ";
cin>>p.price;
cout<<"\nEnter Product Quantity : ";
cin>>p.quantity;


return cin;
}
ostream & operator<<(ostream &cout, Product &p){ //show product

cout<<"\nProduct ID : "<<p.id
    <<"\nProduct Name : "<<p.name
    <<"\nProduct Type : "<<p.type
    <<"\nProduct Price : "<<p.price
    <<"\nProduct Quantity : "<<p.quantity<<endl<<endl;

return cout;
}
Product Product::operator=(Product &obj){  // product = (Another product)
this->id=obj.id;
this->name=obj.name;
this->price=obj.price;
this->type=obj.type;
this->quantity=obj.quantity;

return *this;
}
void Product::Update(){

//  N/A


}
void Product::Delete()
{

    // N/A

}
int Product::getID(){ //returns ID

return id;

}
int Product::getQuantity(){
return quantity;
}
void Product::setQuantity(int newQuantity){
this->quantity=newQuantity;

}
