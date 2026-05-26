#include<iostream>
#include<string>
#include<Product.h>
using namespace std ;

Products::Products(int id, string name, float price, int stock){
    this->id = id ;
    this->name = name ;
    this->price = price ;
    this->stock = stock ;
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

void Products::increaseStock(int qty){
    this->stock += qty ;
}
void Products::decreaseStock(int qty){
    if(this->stock > qty)
        this->stock -= qty;
}

