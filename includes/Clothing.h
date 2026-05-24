#ifndef CLOTHING
#define CLOTHING
#include<iostream>
#include<string>
#include<Product.h>
using namespace std ;

class Clothing : public Products{
    protected:
        string size;
        string color;

    
    public:
    Clothing(
            int id ,
            string name,
            float price,
            int stock ,
            string size,
            string color
    ) ;

    void display() override ;

    float similarityScore() override;

    ~Clothing(){} ;
    
};

#endif 