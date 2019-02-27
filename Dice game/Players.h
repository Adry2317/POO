/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Players.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 26 de febrero de 2019, 16:42
 */

#ifndef PLAYERS_H
#define PLAYERS_H
#include <iostream>
using namespace std;
class Players {
    
    private:
        int _numTiradas;
        int _numPuntos;
        bool _playing ;
        string _name;
    
    
public:
    Players( int tiradas = 0 , int puntos = 0 , bool ply = true, string name=" " );
    Players(const Players& orig);
    virtual ~Players();


    int LanzarDado (); //Function that calculate a random number between 1 to 6.
    
    
    void setNumTiradas ( int tiradas );
    void setNumPuntos( int puntos );
    void setPlaying ( bool ply );
    void setName ( string name );
     
    int getNumeroTiradas ();
    int getPuntos ( );
    bool getPlaying ( );
    string getName ( );
};

#endif /* PLAYERS_H */

