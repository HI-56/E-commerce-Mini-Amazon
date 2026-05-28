#include<iostream>
#include<string>
#include<Client.h>
using namespace std ;

Clients::Clients(){
    this->id = 000 ;
    this->name = "unkown";
    this->email = "";
}


Clients::Clients(int id , string name , string email){
    this->id = id ;
    this->name = name;
    this->email = email;
}

int Clients::getId(){
    return this->id;
};

string Clients::getName(){
    return this->name ;
};
string Clients::getEmail(){
    return this->email;
};

void Clients::setId(int id ){
    this->id = id ;
}
void Clients::setName(string name){
    this->name = name;
}
void Clients::setEmail(string email){
    this->email = email;
}

void Clients::displayHistory(){
    for (auto* pro : cartHistory) {
        cout<<"\n Product name   :      "<<pro->getName()<<"\n" ;
        cout<<" Product price    :      "<<pro->getPrice()<<"\n" ;
        cout<<" Quantity ordered :      "<<pro->getQty()<<"\n" ;
    }
}
void Clients::addToHistory(Products* pro){
    cartHistory.push_back(pro) ;
}