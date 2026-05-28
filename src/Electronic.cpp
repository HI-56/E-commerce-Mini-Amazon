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
        this->category = "Electronic" ;
    }

void Electronic::display(){
    
    cout<< "\nProducts ID : "<<this->id<<"\n" ;
    cout<< "Products Name : "<<this->name<<"\n" ;
    cout<< "Products brand: "<<this->brand<<"\n" ;
    cout<< "Products Price : "<<this->price<<" DH\n" ;
    cout<< "In stock: "<<this->stock<<"\n" ;
    cout<<"-----------------------------------------------\n";
}

float Electronic::similarityScore(){
    return 0.5 ;
}
