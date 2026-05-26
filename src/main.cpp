#include <iostream>
#include "Product.h"
#include "Clothing.h"
#include "Electronic.h"
#include "Food.h"
#include "Order.h"
#include "Client.h"
#include "Cart.h"
#include "Utils.h"
using namespace std ;

int main(){
// the cart ;    
Cart* cart = new Cart();
// declaring the categorys tables ;    
vector<Products*> Clothings  ;
vector<Products*> Electronics ;
vector<Products*> Foods ;

//adding some products into each category ;

// Clothings categorys : 
AddClothing(Clothings , new Clothing(101 ,"T-shirts" ,120 ,25 ,"M" ,"black")) ;
AddClothing(Clothings , new Clothing(102, "Levi Jeans", 59.99, 30, "L", "blue")) ;
AddClothing(Clothings , new Clothing(103, "Adidas Hoodie", 49.99, 20, "XL", "White")) ;

// Electronics categorys :
AddElectronic(Electronics , new Electronic(201 ,"Iphone 13" ,5999.99 ,32 ,"Appel" ));
AddElectronic(Electronics , new Electronic(202, "MacBook Pro", 19999.99, 10, "Apple" ));
AddElectronic(Electronics , new Electronic(203, "Galaxy S24", 9999.99, 20, "Samsung" ));

// Foods categorys :
AddFood(Foods , new Food(301 ,"Pizza" ,45 ,100 ,"Pizza Hut"));
AddFood(Foods , new Food(302, "Nutella", 4.99, 75, "Ferrero"));
AddFood(Foods , new Food(303, "Coca Cola", 1.99, 100, "Coca Cola"));

// done fulling stock ;




while(true){
    int choice ;
    
    // display the menu 
    DisplayMenu() ;
    cin>>choice ;
    switch (choice)
    {
    case 1:
        {
            int CategChoice ;
        CategoryDisplay() ;
        cout<<"\nChose a Category (1,2,3) / 0 for all categorys: \t" ;
        cin>>CategChoice  ;

            switch (CategChoice)
            {
            case 1:
                cout<< "\n---- Clothings category : ----\n" ;
                chowProducts(Clothings);
                break;
            case 2:
                cout<< "\n---- Electronics category : ----\n" ;
                chowProducts(Electronics);
                break;
            case 3:
                cout<< "\n---- Foods category : ----\n" ;
                chowProducts(Foods);
                break;
            case 0:
                cout<< "\n===== ALL Categorys : =====\n" ;
                cout<< "\n---- Clothings category : ----\n" ;
                chowProducts(Clothings);
                cout<< "\n_______________________________________\n" ;
                cout<< "\n---- Electronics category : ----\n" ;
                chowProducts(Electronics);
                cout<< "\n_______________________________________\n" ;
                cout<< "\n---- Foods category : ----\n" ;
                chowProducts(Foods);
                cout<< "\n_______________________________________\n" ;
                cout<< "\n========================================\n" ;
                break;
            default :
                cout<< "\n invalid choice !!!\n" ;
                break;
        }
        }
        break;
    case 2:
    {
        int ProId ;
        int qty ;
        Products* foundedPro  = nullptr;
        cout <<"\nEnter Product\'s ID :\t" ;
        cin >> ProId ;
        cout <<"\nEnter quantity :\t" ;
        cin >>qty;
        if(ProId < 200){
            foundedPro = FindById(Clothings ,ProId) ;
        }else if(ProId > 200 && ProId < 300){
            foundedPro = FindById(Electronics ,ProId) ;
        }else {
            foundedPro = FindById(Foods ,ProId) ;
        }

        
        if(foundedPro != nullptr){
            foundedPro->setQty(qty) ;
            cart->addProduct(foundedPro) ;
        }else{
            cout<<"\n No product found match the ID !!!\n" ;
        }
        
    }
        
        break;
    case 3:
        {
            int ProdId ;
            Products* deletedPro  = nullptr;
            cout <<"\nEnter Product\'s ID you want to delete:\t" ;
            cin >> ProdId ;

            if(ProdId < 200){
                deletedPro = FindById(Clothings ,ProdId) ;
            }else if(ProdId > 200 && ProdId < 300){
                deletedPro = FindById(Electronics ,ProdId) ;
            }else {
                deletedPro = FindById(Foods ,ProdId) ;
            }
            
            if(deletedPro != nullptr){
                cart->removeProduct(ProdId) ;
            }
            
        }
        break;
    case 4:
        cout<<"\n========== Cart detail =========\n" ;
        cart->displayCart() ;
        cout<<"\n================================\n" ;
        break;
    case 5:
        {
            //// im here now 
        }
        break;
    case 6:
        
        break;
    case 0:
        return 0 ;
        
    default:
    cout<<"\nInvalid choice !!\n" ;
    cout<<"\nEnter a valid numbre :\n" ;
        break;
    }

}





    return 0 ;
}