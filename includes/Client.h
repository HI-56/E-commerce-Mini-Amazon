#ifndef CLIENTS
#define CLIENTS
#include<iostream>
#include<string>
#include<vector>
#include<Product.h>
using namespace std ;

class Clients{
    private :
    int id ;
    string name ;
    string email;
    vector<Products*> cartHistory;

    public:
    Clients();
    Clients(
        int id ,
        string name ,
        string email
    );
    int getId();
    string getName();
    string getEmail();

    void setId(int id );
    void setName(string name);
    void setEmail(string email);

    void displayHistory();
    void addToHistory(Products* pro);

    ~Clients();
};

#endif 