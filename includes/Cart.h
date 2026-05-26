#ifndef CART
#define CART
#include<iostream>
#include<string>
#include<vector>
#include <Product.h>
using namespace std ;

class Cart {
private:
    vector<Products*> products;   

public:

    Cart();
    void addProduct(Products* product);

    void removeProduct(int id);

    float calculateTotal();

    void displayCart();

    ~Cart(){};

};
#endif 