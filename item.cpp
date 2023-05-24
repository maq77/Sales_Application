#include "item.h"

void item::operator++(){

this->quantity++;

}
void item::operator--(){

this->quantity--;

}
void item::operator+=(int n){

this->quantity += n;

}
void item::operator-=(int n){

this->quantity -= n;

}
void item::UpdateQuantity(int newQuantity){

this->quantity=newQuantity;

}
