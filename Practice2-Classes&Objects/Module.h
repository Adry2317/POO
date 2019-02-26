/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Module.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 25 de febrero de 2019, 9:12
 */

#ifndef MODULE_H
#define MODULE_H
#include "Theme.h"
#include "Date.h"
#include "Garito.h"


using namespace std;

namespace functions{
    
     void ShowTemazo ( Theme t1);
    
     void ShowGarito ( Garito g1 );
     
     void  ShowFecha ( Date f1 );
     
     void DataGarito ( Garito &G2 );
    
    
    
}




#endif /* MODULE_H */

