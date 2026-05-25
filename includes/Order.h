#ifndef ORDER
#define ORDER

#include <iostream>
#include <vector>
#include <Product.h>
#include <Client.h>

using namespace std;

class Order {

private:
    int orderId;
    Clients* client;
    vector<Products*> products;

    float totalPrice;
    float tva ;
    float finalPrice;

public:

    Order();

    Order(int orderId, Clients* client);

    // actions
    void addProduct(Products* product);

    void calculateTotal();   

    void displayOrder();

    void confirmOrder();    

    ~Order(){};
};

#endif