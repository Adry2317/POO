/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 24 de febrero de 2019, 18:38
 */

#include <cstdlib>
#include <iostream>
#include "Date.h"
#include "Garito.h"
#include "Theme.h"
#include "Module.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Objet to theme's class.
    Theme t1;
    Theme t2( Manifiesto, Nach, 660, 10 );
    
    //Objet to garito's class.
    Garito g1;
    Garito g2( g1 );
    
    //Object to date's class.
    Date f1;
    Date f2 ( 23,01,2017 );
    
    //Showing data of the classes.
    ShowTemazo ( t1 ); //defult/
    ShowTemazo ( t2 );//Parameterized.
    
    ShowGarito ( g1 );//default
    ShowGarito ( g2 );//Copy.
            
    ShowFecha ( f1 );//defautl.
    ShowFecha ( f2 );//parameterized.
    
    
    return 0;
}

