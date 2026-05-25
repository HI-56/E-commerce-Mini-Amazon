#include<iostream>
#include<string>
#include<Electronic.h>
using namespace std ;

Electronic::Electronic(
            int id ,
            string name,
            float price,
            int stock ,
            string brand
    ):Products(id ,name ,price ,stock){
        this->brand = brand ;
    }

void Electronic::display(){
    cout<< "\n-- Clothing Category : -- \n" ;
    cout<< "\nProducts ID : "<<this->id<<"\n" ;
    cout<< "\nProducts Name : "<<this->name<<"\n" ;
    cout<< "\nProducts brand: "<<this->brand<<"\n" ;
    cout<< "\nProducts Price : "<<this->price<<"\n" ;
    cout<< "\nIn stock: "<<this->stock<<"\n" ;
}

float Electronic::similarityScore(){
    return 0.5 ;
}
