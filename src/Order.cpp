#include<iostream>
#include<string>
#include<Order.h>
using namespace std ;

Order::Order(){} ;

Order::Order(int orderId, Clients* client){
    this->orderId = orderId ;
    this->client = client ;
}

void Order::addProduct(Products* product){
    this->products.push_back(product) ;
}


void Order::setOrderId( int id) {
    this->orderId = id ;
}
    void Order::setClient(Clients* client) {
        this->client = client ;
    }


void Order::calculateTotal(){
    float total = 0 ;
    for(auto* pro : products){
        total += pro->getPrice() * pro->getQty() ;
    }
    this->totalPrice  = total ;
    if(this->totalPrice >= 10000 && this->totalPrice < 20000){
        reduction = this->totalPrice * 0.15 ;
        cout<<"\ncongratulation you win a reduction of 15%\n";
    }else if(this->totalPrice >= 20000){
        reduction = this->totalPrice * 0.25 ;
        cout<<"\ncongratulation you win a reduction of 25%\n";
    }
    this->tva = this->totalPrice * 0.2 ;
    this->finalPrice = (this->totalPrice + this->tva) - reduction ;
} 
void Order::displayOrder(){
    cout<<"\nOrder ID :" <<this->orderId<<"\n" ;
    cout<<"________________________________\n";
    for(auto* pro : products){
        cout<<"\n Product name   :      "<<pro->getName()<<"\n" ;
        cout<<" Product price    :      "<<pro->getPrice()<<"\n" ;
        cout<<" Quantity to order:      "<<pro->getQty()<<"\n" ;
    }
        cout<<"\n-- the total price before TVA is : --"
            <<"\n Price :\t           "<< this->totalPrice<< " DH" << endl;
        cout<<"\n Reduction value is : \t" << this->reduction<<endl;
        cout<<"\n TVA value is       :  \t" << this->tva <<endl;
        cout<<"\n Final price is     :\t"<< this->finalPrice <<endl;
}

void Order::confirmOrder(){
    
    for(auto* pro : this->products){
            pro->decreaseStock();
    }

}

void Order::clearOrder() {
    this->products.clear();  
}