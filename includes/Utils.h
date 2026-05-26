#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <vector>
#include "Product.h"
#include "Clothing.h"
#include "Electronic.h"
#include "Food.h"
#include "Order.h"
#include "Client.h"
#include "Cart.h"

void AddClothing(vector<Products*>& Clothings ,Products* pro);
void AddElectronic(vector<Products*>& Electronic ,Products* pro);
void AddFood(vector<Products*>& Food ,Products* pro);

void CategoryDisplay() ;

void chowProducts(vector<Products*> products) ;

void DisplayMenu() ;
Products* FindById(vector<Products*> products , int Id) ;


#endif 