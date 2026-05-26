#ifndef PRODUCTS
#define PRODUCTS
#include<iostream>
#include<string>
using namespace std ;

class Products {

    protected :
        int id;
        string name;
        float price;
        int stock;
        int qty = 1;

    public:
        Products(
            int id,
            string name,
            float price,
            int stock
    );
        

        int getStock();
        int getId();
        void setQty(int qty) ;
        int getQty();
        float getPrice();
        void decreaseStock();
        void increaseStock();
        virtual void display() = 0;

        virtual float similarityScore() = 0;

        virtual ~Products(){} ;
};

#endif 