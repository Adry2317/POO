/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 26 de febrero de 2019, 16:41
 */

#include <cstdlib>
#include <iostream>
#include "Players.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int Nplayer = 0;
    bool keepPlaying = true;
    
    
    cout<< "Introduce number of players: "<<endl;
    cin>>Nplayer;
    
     Players *vPlayers = new Players [ Nplayer ];
    
     for(int i =0; i<Nplayer;i++){
     vPlayers[i]=Players();
        
    }
  
     
     for (int i =0 ; i< Nplayer; i++){
         string name;
        
         cout<<"Introduce the name of the player"<< i+1 << ":" << endl  ;
                 
         cin>>name;
          vPlayers->setName( name  ); //duda 
        
    }
    
   
     
    
    
    for ( int i = 0; i< 21|| !keepPlaying; i++ ){
        keepPlaying = false;
        
        for ( int j = 0; j<Nplayer; j++ ){
            
            if (vPlayers[j].getPlaying() == true ){
                int tirada =vPlayers[j].LanzarDado();
                
                vPlayers[j].setNumPuntos(tirada+ vPlayers[j].getPuntos());
                vPlayers[j].setNumTiradas(vPlayers[j].getNumeroTiradas() + 1 );
                
                if( vPlayers[j].getPuntos() >= 21 ){
                    
                    vPlayers[j].setPlaying( false );
                    
                    keepPlaying += vPlayers[j].getPlaying();
                }
                
                
                  }
            
            
        }
        
    }
    
     Players *vWinner = new Players [Nplayer];
     
     int contador = 0;
     
     for ( int i = 0; i<Nplayer; i++){
        
        
        if (vPlayers[i].getPuntos()==21){
            vWinner[contador]=vPlayers[i];
        }
    }
    int max=-999;
    int aux = 0;
     for ( int p=0; p<contador; p++){
         if (max< vPlayers[p].getNumeroTiradas()){
             aux = p;
             max = vPlayers[p].getNumeroTiradas();
         }
         
     }
     
     cout<< "The winner is : "<< vWinner[aux].getName();
     
     delete [ ] vPlayers;
     delete [ ] vWinner;
             
    return 0;
}
