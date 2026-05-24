#ifndef FOOD
#define FOOD
#include<iostream>
#include<string>
#include<Product.h>
using namespace std ;

class Food : public Products{
    protected:
        string brand;

    
    public:
    Food(
            int id ,
            string name,
            float price,
            int stock ,
            string brand
    ) ;

    void display() override ;

    float similarityScore() override;

    ~Food(){} ;
    
};

#endif 