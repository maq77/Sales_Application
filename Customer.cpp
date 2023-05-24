 #include "Customer.h"


istream & operator>>(istream &cin, Customer &c){ ///insert Data

cout<<"\nEnter ID : ";
cin>>c.id;
cout<<"\nEnter Phone : ";
cin>>c.phone;
cout<<"\nChoose 1- Company , 2- Person : ";
cin>>c.ch;     //company or person
switch(c.ch){   /// switch to choose
case 1:
    cout<<"\nEnter Company Name: ";
    cin>>c.company_name;
    cout<<"\nEnter Company Location: ";
    cin>>c.location;
    break;
case 2:
     cout<<"\nEnter Full Name : "; cin>>c.fullname;
     cout<<"\nEnter Billing Address : "; cin>>c.billing_adress;
     break;

}//end of switch

return cin;
}
ostream & operator<<(ostream &cout, Customer &c){

cout<<"\nID : "<<c.id<<endl;
switch(c.ch){/// switch to choose
case 1:
     cout<<"\nCompany Name : "<<c.company_name<<endl;
     cout<<"\nCompany Location: "<<c.location<<endl;
     break;
case 2:
    cout<<"\nFull Name : "<<c.fullname<<endl;
    cout<<"\nBilling Address: "<<c.billing_adress<<endl;
    break;
}//end of switch
cout<<"\nPhone : "<<c.phone<<endl;

return cout;
}
Customer Customer::operator=(Customer &obj){

this->fullname=obj.fullname;
this->billing_adress=obj.billing_adress;
this->company_name=obj.company_name;
this->ch=obj.ch;
this->id=obj.id;
this->location=obj.location;
this->phone=obj.phone;


return *this;
}
Customer::getID(){
return id;
}
