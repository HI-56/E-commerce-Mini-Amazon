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
        this->category = "Clothing" ;
    }

void Clothing::display(){
    
    cout<< "\nProducts ID : "<<this->id<<"\n" ;
    cout<< "Products Name : "<<this->name<<"\n" ;
    cout<< "Products size : "<<this->size<<"\n" ;
    cout<< "Products color : "<<this->color<<"\n" ;
    cout<< "Products Price : "<<this->price<<" DH\n" ;
    cout<< "In stock: "<<this->stock<<"\n" ;
    cout<<"-----------------------------------------------\n";
}

float Clothing::similarityScore(){
    return 0.9 ;
}

