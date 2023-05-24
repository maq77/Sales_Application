#ifndef STOCK_H
#define STOCK_H
#include"Product.h"

class Stock
{
    public:
        void AddProducts();
        void ShowProducts();
        void EditProduct();
        void EditProduct(int);
        void DeleteProduct();
        void DeleteProduct(int);
        void SearchProduct(int);
        void MinusProduct_Quantity(int Product_ID, int Quantity);
        void UpdateQuantity(int);
        void UpdateQuantity(int,int);
        int getQuantity(int); //get quantity by product id
        double getProductPrice(int);
    private:
        Product ProductList[10];
        int count=0;


};

#endif // STOCK_H
