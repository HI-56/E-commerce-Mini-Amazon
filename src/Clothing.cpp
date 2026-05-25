#include<iostream>
#include<string>
#include<Clothing.h>
using namespace std ;

Clothing::Clothing(
            int id ,
            string name,
            float price,
            int stock ,
            string size,
            string color
    ):Products(id ,name ,price ,stock){
        this->size = size ;
        this->color = color ;
    }

void Clothing::display(){
    cout<< "\n-- Clothing Category : -- \n" ;
    cout<< "\nProducts ID : "<<this->id<<"\n" ;
    cout<< "\nProducts Name : "<<this->name<<"\n" ;
    cout<< "\nProducts size : "<<this->size<<"\n" ;
    cout<< "\nProducts color : "<<this->color<<"\n" ;
    cout<< "\nProducts Price : "<<this->price<<"\n" ;
    cout<< "\nIn stock: "<<this->stock<<"\n" ;
}

float Clothing::similarityScore(){
    return 0.9 ;
}

