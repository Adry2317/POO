/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Module.h"
#include <iostream>
using namespace std;

void ShowTemazo( Theme temazo){
    
    cout<<"Title: "<<temazo.gettTitle()<<endl;
    cout<<"Performer: "<<temazo.gettPerformer()<<endl;
    cout<<"Length: "<<temazo.gettDuration()<<endl;
    
    
}

void ShowGarito( Garito g1){
    
    cout<<"Name:  "<<g1.gettName()<<endl;
    cout<<"Adress: "<<g1.gettAdress()<<endl;
    
   
}

void ShowFecha( Date f1){
    
    cout<<"Day: "<<f1.gettDay();
    cout<<"Month: "<<f1.gettMonth();
    cout<<"Year: "<<f1.getYear();
    
}
    
void DataGarito(Garito &G2){
    cout<<"introduce the name of the garito: "<<endl;
    string name;
    cin>>name;
    
    G2.setName(name);
    
    cout<<"Introduce the adress of the garito: "<<endl;
    string adress;
    cin>>adress;
    
    G2.setAdress(adress);
            
    
    
}
    
