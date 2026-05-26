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
    for(auto* pro : products){
        this->totalPrice += pro->getPrice() ;
    }
    this->tva = this->totalPrice * 0.2 ;
    this->finalPrice = this->totalPrice + this->tva ;
} 
void Order::displayOrder(){
    cout<<"Order ID :" <<this->orderId ;
    for(auto* pro : products){
        pro->display();
    }
    cout << "\n-- the total price before TVA is : --\n"
         << "price : \t"
         << this->totalPrice
         << " DH" << endl;
    cout <<"\n TVA value is :\t" << this->tva <<endl;
    cout <<"\n Final price is :\t"<< this->finalPrice <<endl;
}

void Order::confirmOrder(){
    
    for(auto* pro : products){
        if(pro->getStock() == 0){
            cout<<"the product of the ID : "<<pro->getId() << "is no longer available"<<endl ;
        }else{
            pro->decreaseStock();
        }
        
    }

}

void Order::clearCart() {
    this->products.clear();  
}