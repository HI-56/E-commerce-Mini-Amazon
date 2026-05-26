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
    for (auto i = this->products.begin(); i != this->products.end(); i++) {
        if ((*i)->getId() == id) {
            this->products.erase(i); 
            return;
        }
    }
}


float Cart::calculateTotal(){
    float total = 0 ;

    for(auto* pro : this->products ){
        total += pro->getPrice() * pro->getQty() ;
    }
    return total ;
}

void Cart::displayCart(){
    for(auto* pro : this->products ){
        pro->display() ;
        cout<<"Quantity :"<< pro->getQty() <<"\n";
    }
    cout<<"\n=== The Total Price is : ===\n"<<"Price : \t"<<this->calculateTotal()<<"DH"<<endl ;
};

