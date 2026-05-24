#ifndef ELECTRONIC
#define ELECTRONIC
#include<iostream>
#include<string>
#include<Product.h>
using namespace std ;

class Electronic : public Products{
    protected:
        string brand;

    
    public:
    Electronic(
            int id ,
            string name,
            float price,
            int stock ,
            string brand
    ) ;

    void display() override ;

    float similarityScore() override;

    ~Electronic(){} ;
    
};

#endif 