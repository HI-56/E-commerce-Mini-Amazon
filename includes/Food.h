#ifndef FOOD
#define FOOD
#include<iostream>
#include<string>
#include<vector>
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

    string getBrand();
    void display() override ;

    float similarityScore(vector<Products*> cart) override;

    ~Food(){} ;
    
};

#endif 