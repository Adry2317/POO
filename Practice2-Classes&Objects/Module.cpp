/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Module.h"
#include "Garito.h"
#include "Date.h"
#include <iostream>

functions::ShowTemazo(Theme t1){
    
    std::cout<<"Title: "<<t1.gettTitle()<<endl;
    std::cout<<"Performer: "<<t1.gettPerformer()<<endl;
    std::cout<<"Length: "<<t1.gettDuration()<<endl;
    
    
}

functions::ShowGarito(Garito g1){
    
    std::cout<<"Name:  "<<g1.gettName()<<endl;
    std::cout<<"Adress: "<<g1.gettAdress()<<endl;
    
   
}

functions::ShowFecha(Date f1){
    
    std::cout<<"Day: "<<f1.gettDay();
    std::cout<<"Month: "<<f1.gettMonth();
    std::cout<<"Year: "<<f1.getYear();
    
}
    
functions::DataGarito(Garito& G2){
    cout<<"introduce the name of the garito: "<<enld;
       
    
    
    cout<<"Introduce the adress of the garito: "<<endl;
    string adress;
    cin>>adress;
    
            
    
    
}
    
