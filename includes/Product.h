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
        string category ;
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
        void stockAlert() ;
        int getQty();
        float getPrice();
        string getName();
        void decreaseStock();
        void increaseStock();
        virtual void display() = 0;

        virtual float similarityScore() = 0;

        virtual ~Products(){} ;
};

#endif 