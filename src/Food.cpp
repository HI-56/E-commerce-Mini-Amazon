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
    cout<< "Products Name : "<<this->name<<"\n" ;
    cout<< "Products brand: "<<this->brand<<"\n" ;
    cout<< "Products Price : "<<this->price<<" DH\n" ;
    cout<< "In stock: "<<this->stock<<"\n" ;
    cout<< "--------------------------\n";
}

float Food::similarityScore(){
    return 0.2 ;
}
