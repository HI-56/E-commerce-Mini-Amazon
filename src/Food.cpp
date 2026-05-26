#include<iostream>
#include<string>
#include<Food.h>
using namespace std ;

Food::Food(
            int id ,
            string name,
            float price,
            int stock ,
            string brand
    ):Products(id ,name ,price ,stock){
        this->brand = brand ;
    }

void Food::display(){
    
    cout<< "\nProducts ID : "<<this->id<<"\n" ;
    cout<< "\nProducts Name : "<<this->name<<"\n" ;
    cout<< "\nProducts brand: "<<this->brand<<"\n" ;
    cout<< "\nProducts Price : "<<this->price<<" DH\n" ;
    cout<< "\nIn stock: "<<this->stock<<"\n" ;
    cout<< "\n--------------------------\n";
}

float Food::similarityScore(){
    return 0.2 ;
}
