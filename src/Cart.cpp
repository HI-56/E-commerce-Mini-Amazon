#include<iostream>
#include<string>
#include<Cart.h>
using namespace std ;


Cart::Cart(){
    
}

void Cart::addProduct(Products* product){
    if(product->getStock() < product->getQty()){
        cout<<"\nNo enough quanity in stock for the product \""<< product->getName()<<"\"\n" ;
        cout << " Stock :  " <<  product->getStock() ;
    }else{
        this->products.push_back(product) ;
    }
    
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
        cout<<"\nProduct name   :      "<<pro->getName()<<"\n" ;
        cout<<"Product price    :      "<<pro->getPrice()<<"\n" ;
        cout<<"Quantity to order:      "<<pro->getQty()<<"\n" ;
    }
    cout<<"\n== The Total Price is : ==\n"<<"Price : \t"<<this->calculateTotal()<<"DH"<<endl ;
};

vector<Products*> Cart::getProducts(){
    return this->products ;
}

void Cart::clearCart() {
    this->products.clear();  
}
