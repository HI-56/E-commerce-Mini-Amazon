
#include "Utils.h"
using namespace std ;

void AddClothing(vector<Products*>& Clothings ,Products* pro){
    Clothings.push_back(pro) ;

}
void AddElectronic(vector<Products*>& Electronic ,Products* pro){
    Electronic.push_back(pro) ;

}
void AddFood(vector<Products*>& Food ,Products* pro){
    Food.push_back(pro) ;
}


void CategoryDisplay(){
    cout<<"\n=== Cathegorys ===\n" ;
    cout<<"1- Clothing \n" ;
    cout<<"2- Electronic \n" ;
    cout<<"3- Food \n" ;
    cout<<"0- All \n" ;
    cout<<"==================\n";
}

void chowProducts( vector<Products*> products){
    for(auto* pro : products){
        pro->display() ;
    }
}

void DisplayMenu(){
    cout << "\n";
    cout << "================================\n";
    cout << "       MINI AMAZON STORE        \n";
    cout << "================================\n";
    cout << "  1. Display Products       \n";
    cout << "  2. Add Products to Cart        \n";
    cout << "  3. Remove Product from Cart   \n";
    cout << "  4. View Cart                  \n";
    cout << "  5. Place Order                \n";
    cout << "  6. View Order History         \n";
    cout << "  0. Exit                       \n";
    cout << "================================\n";
    cout << "Enter your choice: \t";
}

Products* FindById(vector<Products*> products , int Id) {
    for (auto* pro :products ){
        if(pro->getId() == Id ){
            return pro ;
        }
    }
    return nullptr  ;
}
