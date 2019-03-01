/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Garito.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 1 de marzo de 2019, 12:23
 */

#include "Garito.h"

Garito::Garito( string N, string A ) : _name( N ), _adress( A )
{
    
}

Garito::Garito(const Garito& orig) {
}

Garito::~Garito() {
}


void Garito::setName(string name){
    if ( name == " "){
        throw string ( "Error:  Name is empty " );
    }
    else{
        this-> _name= name;
    }
}

void Garito::setAdress(string adress){
    if ( adress == " " ){
        throw string ( "Error:  adress is empty" );
    }
    else{
        this-> _adress = adress;
    }
    
}

