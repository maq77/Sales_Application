#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "Customers.h"
#include "Stock.h"
#include "Sys.h"


using namespace std;

int main()
{
    Sys S;
    int get;
    do
    {
    cout<<"[ Main ]"<<endl;
    cout<<"\n[1] Customers "
        <<"\n[2] Products "
        <<"\n[3] Orders "
        <<"\n[4] Data "
        <<"\n[0] Exit"<<endl;
        cout<<">>> ";
        cin>>get;
        switch(get)
        {
            case 1:
                { ///Customer Functions
                    cout<<"\n[1] Add Customer "
                        <<"\n[2] Update Customer "
                        <<"\n[3] Delete Customer "
                        <<"\n[00] Back.."<<endl;
                        //<<"\n[0] Exit"<<endl;
                        cout<<">>> ";
                        cin>>get;
                        system("pause");
                        system("cls");
                        switch(get)
                        {
                           case 1:
                           {
                               cout<<"[ Add Customer ]"<<endl;
                               S.AddCustomers();
                               break;
                           }
                           case 2:
                           {
                               cout<<"[ Update Customer Data ]"<<endl;
                               S.UpdateCustomer();
                               break;
                           }
                           case 3:
                           {
                               cout<<"[ Delete Customer ]"<<endl;
                               S.DeleteCustomer();
                               break;
                           }
                           /*case 0:
                            {
                                return 0;
                            }*/
                        }
                       system("pause");
                       system("cls");

                  break;
                }
            case 2:
                { ///Product Functions
                    cout<<"\n[1] Add Product "
                        <<"\n[2] Update Product "
                        <<"\n[3] Delete Product "
                        <<"\n[00] Back.."<<endl;
                       // <<"\n[0] Exit"<<endl;
                        cout<<">>> ";
                        cin>>get;
                        system("pause");
                        system("cls");
                        switch(get)
                        {
                           case 1:
                           {
                               cout<<"[ Add Product ]"<<endl;
                               S.AddProducts();
                               break;
                           }
                           case 2:
                           {
                               cout<<"[ Update Product Data ]"<<endl;
                               S.UpdateProduct();
                               break;
                           }
                           case 3:
                           {
                               cout<<"[ Delete Product ]"<<endl;
                               S.DeleteProduct();
                               break;
                           }
                          /* case 0:
                            {
                                return 0;
                            }*/
                        }

                     system("pause");
                     system("cls");
                  break;
                }
            case 3:
                {///Processing Transaction and Orders
                    cout<<"\n[1] Create Order "
                        <<"\n[2] Update Order "
                        <<"\n[3] Delete Order "
                        <<"\n[4] Pay Order "
                        <<"\n[00] Back.. "<<endl;
                        //<<"\n[0] Exit "<<endl;
                        cout<<">>> ";
                        cin>>get;
                        system("pause");
                        system("cls");
                        switch(get)
                        {
                           case 1:
                           {
                               cout<<"[ Create Order ] Min : 2 Orders "<<endl;
                               S.AddOrder();
                               break;
                           }
                           case 2:
                           {
                               cout<<"[ Update Order Data ]"<<endl;
                               S.UpdateOrder();
                               break;
                           }
                           case 3:
                           {
                               cout<<"[ Update Order Status ]"<<endl;
                               S.DeleteOrder();
                               break;
                           }
                           case 4:
                            {
                                cout<<"[ Pay Order ]"<<endl;
                                S.PayOrder();
                                break;
                            }
                           /*case 0:
                            {
                                return 0;
                            }*/
                        }
                     system("pause");
                     system("cls");

                  break;
                }
            case 4:
                { // Print Data
                    cout<<"\n[1] Show Customers "
                        <<"\n[2] Show Products "
                        <<"\n[3] Show Orders/Transactions "
                        <<"\n[00] Back.."<<endl;
                        //<<"\n[0] Exit "<<endl;
                        cout<<">>> ";
                        cin>>get;
                        system("pause");
                        system("cls");
                        switch(get)
                        {
                           case 1:
                           {
                               cout<<"[ Show Customers Data ]"<<endl;
                               S.ShowCustomers();
                               break;
                           }
                           case 2:
                           {
                               cout<<"[ Show Products Data ]"<<endl;
                               S.ShowProducts();
                               break;
                           }
                           case 3:
                           {
                               cout<<"[ Show Orders/Transactions Data ]"<<endl;
                               S.ShowOrders();
                               break;
                           }
                           /*case 0:
                            {
                                return 0;
                            }*/
                        }


                  break;
                  system("pause");
                  system("cls");
                }
            case 0:
                { /// Exit Program
                    return 0;
                }
        }

    }while(get != 0 || get == 00);

    return 0;
}
