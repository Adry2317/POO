/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Players.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 26 de febrero de 2019, 16:42
 */

#include "Players.h"
#include<stdlib.h>


Players::Players( int Tir, int Punt , bool ply, string name): _numPuntos( Tir ), _numTiradas ( Punt ), _playing ( ply ),
                                                                                                  _name( name )
{
                                                                           
}

Players::Players(const Players& orig) {
}

Players::~Players() {
}

int Players::LanzarDado() {
    int point;
    
    point = ( 1 + rand() % 6 );    //Numeros aleatorios 1-6
    
    return point;
}

/**
 * Assing puntos to NumPuntos.
 * @param puntos
 * @return 
 */
void Players::setNumPuntos(int puntos) {
    
    this->_numPuntos = puntos;
}

/**
 * assing tirada to _NumTiradas.
 * @param tiradas
 * @return 
 */
void Players::setNumTiradas(int tiradas) {
    
    this->_numTiradas = tiradas;
}


/**
 * assing bool value to palyer.
 * @param ply
 * @return 
 */
void Players::setPlaying(bool ply) {

    this->_playing = ply;
}

void Players::setName(string name) {
    this->_name = name;
}
 
bool Players::getPlaying() {
    return this->_playing;
}

int Players::getPuntos() {
    return this->_numPuntos;
}

int Players::getNumeroTiradas() {
    return this->_numTiradas;
}

string Players::getName() {
    return this->_name;
}
