#ifndef CLOTHING
#define CLOTHING
#include<iostream>
#include<string>
#include<vector>
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
    string getSize() ;
    string getColor() ;
    void display() override ;

    float similarityScore(vector<Products*> cart) override;

    ~Clothing(){} ;
    
};

#endif 