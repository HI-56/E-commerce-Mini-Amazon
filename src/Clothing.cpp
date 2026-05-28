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
    string Clothing::getSize(){
        return this->size ;
    }
    string Clothing::getColor() {
        return this->color ;
    }

float Clothing::similarityScore(vector<Products*> cart){
    float score = 0;
    
    for(auto* pro : cart){
        Clothing* cloth = dynamic_cast<Clothing*>(pro) ;
        if(cloth != nullptr){
            if(cloth->getSize() == this->size) score +=0.2 ;
            if(cloth->getColor() == this->color) score +=0.3 ;
        }
    }
    return  score  ;        
}

