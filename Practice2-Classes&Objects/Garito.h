/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Garito.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 24 de febrero de 2019, 19:13
 */

#ifndef GARITO_H
#define GARITO_H

class Garito {

private:
    string _name;
    string _adress;

    
public:
    Garito( string N = " ",  string A = " " );
    Garito(const Garito& orig);
    virtual ~Garito();


    void setName( string name );
    string gettName();
    
    void setAdress ( string adress );
    string gettAdress();
};

#endif /* GARITO_H */

