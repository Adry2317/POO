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
    cout<<"Score: "<<temazo.getScore()<<endl;
     cout<<"/**************************************************/"<<endl;
    
}

void ShowGarito( Garito g1){
  
    cout<<"Name:  "<<g1.gettName()<<endl;
    cout<<"Adress: "<<g1.gettAdress()<<endl;
     cout<<"/**************************************************/"<<endl;
   
}

void ShowFecha( Date f1){
    
    cout<<"Day: "<<f1.gettDay()<<endl;
    cout<<"Month: "<<f1.gettMonth()<<endl;
    cout<<"Year: "<<f1.getYear()<<endl;
     cout<<"/**************************************************/"<<endl;
}
    
void DataGarito(Garito &g1){
    
    cout<<"introduce the name of the garito: "<<endl;
    string name;
    cin>>name;
    
    g1.setName(name);
    
    cout<<"Introduce the adress of the garito: "<<endl;
    string adress;
    cin>>adress;
    
    g1.setAdress(adress);
            
     cout<<"/**************************************************/"<<endl; 
    
}
    
