/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 1 de marzo de 2019, 11:59
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
    Theme temazo1;
    Theme temazo2( "Manifiesto", "Nach", 660, 10 );
    
    //Objet to garito's class.
    Garito g1;
    Garito g2( g1 );
    
    //Object to date's class.
    Date f1;
    Date f2 ( 23,01,2017 );
    
    //Showing data of the classes.
        ShowTemazo ( temazo1 ); //defult/
        ShowTemazo ( temazo2 );//Parameterized.
    
        ShowGarito ( g1 );//default
        ShowGarito ( g2 );//Copy.
            
        ShowFecha ( f1 );//defautl.
        ShowFecha ( f2 );//parameterized.
    
   
    return 0;
}


