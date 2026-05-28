#include<iostream>
#include<string>
#include<Product.h>
using namespace std ;

Products::Products(int id, string name, float price, int stock){
    this->id = id ;
    this->name = name ;
    this->price = price ;
    this->stock = stock ;
    this->qty = 1 ;
}

int Products::getStock(){
    return this->stock ;
}

int Products::getId(){
    return this->id ;
}
float Products::getPrice(){
    return this->price;
}
string Products::getName(){
    return this->name;
}

void Products::setQty(int qty){
    this->qty = qty ;
}
int Products::getQty(){
    return this->qty ;
}
string Products::getCategory(){
    return this->category ;
}
void Products::increaseStock(){
    this->stock += this->qty ;
}
void Products::stockAlert(){
    if( this->getStock()<= 5){
        cout<< "\nWARRNING : " << "the stock of the product\""
            <<this->getName()<<"\" in category \""
            <<this->category<<"\" is under 5 \n"  ;
    }
}
void Products::decreaseStock(){
    if(this->stock >= this->qty)
        this->stock -= this->qty;
}

