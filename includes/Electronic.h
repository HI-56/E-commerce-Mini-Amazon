#ifndef ELECTRONIC
#define ELECTRONIC
#include<iostream>
#include<string>
#include<vector>
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
    string getBrand();
    void display() override ;

    float similarityScore(vector<Products*> cart) override;

    ~Electronic(){} ;
    
};

#endif 