#include<iostream>
#include<string>
#include<Cart.h>
using namespace std ;


Cart::Cart(){
}

void Cart::addProduct(Products* product){
    this->products.push_back(product) ;
}

void Cart::removeProduct(int id) {
    for (auto i = products.begin(); i != products.end(); i++) {
        if ((*i)->getId() == id) {
            products.erase(i); 
            return;
        }
    }
}


float Cart::calculateTotal(){
    float total = 0 ;

    for(auto* pro : products ){
        total += pro->getPrice() ;
    }
    return total ;
}

void Cart::displayCart(){
    for(auto* pro : products ){
        pro->display() ;
    }
    cout<<"\n-- the total price is : --\n"<<"price : \t"<<this->calculateTotal()<<"DH"<<endl ;
};

Cart::~Cart(){}