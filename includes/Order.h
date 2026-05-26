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

    float totalPrice = 0;
    float tva =0 ;
    float finalPrice =0;

public:

    Order();

    Order(int orderId, Clients* client);

    // actions
    void addProduct(Products* product);

    void setOrderId( int id) ;
    void setClient(Clients* client) ;
    void calculateTotal();   

    void clearCart() ;
    void displayOrder();

    void confirmOrder();    

    ~Order(){};
};

#endif