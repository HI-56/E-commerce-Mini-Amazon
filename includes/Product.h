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

    public:
        Products(
            int id,
            string name,
            float price,
            int stock
    );
        

        int getStock();
        int getId();
        float getPrice();
        void decreaseStock(int qty);
        void increaseStock(int qty);
        virtual void display() = 0;

        virtual float similarityScore() = 0;

        virtual ~Products(){} ;
};

#endif 