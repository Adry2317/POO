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
    bool keepPlaying;
    
    
    cout<< "Introduce number of players: "<<endl;
    cin>>Nplayer;
    
     Players *vPlayers = new Players [ Nplayer ];
    
     for(int i =0; i<Nplayer;i++){
     vPlayers[i]=Players();
        
    }
  
     
    for (int i =0 ; i< Nplayer; i++)
    {    
        string name;
        
        cout<<"Introduce the name of the player"<< i+1 << ":" << endl  ;
        cin>>name;
        
        vPlayers[i].setName( name ); //duda 
    }
    
   
     
    
/** We travel Vplayer in the worst case 21 times or until all
      players have a score greater than or equal to 21 */
    
     for ( int i = 0; i< 21|| keepPlaying; i++ ){
        keepPlaying = false;
        
        /** We go through the vector of players */
        for ( int j = 0; j<Nplayer; j++ ){
            
            //If you can still continue playing ...
            if (vPlayers[j].getPlaying() == true ){
                //we throw the dice
                int tirada =vPlayers[j].LanzarDado();
                //we add the puntuation of the dice to the player
                vPlayers[j].setNumPuntos(tirada+ vPlayers[j].getPuntos());
                //We increased the number of runs by 1
                vPlayers[j].setNumTiradas(vPlayers[j].getNumeroTiradas() + 1 );
                
                // check if with this last run you have obtained 21 or more
                if( vPlayers[j].getPuntos() >= 21 ){
                    
                    //If so, we say that this player can not continue playing
                    vPlayers[j].setPlaying( false );
                    
                    //We add the status of this player to the general game state
                    keepPlaying += vPlayers[j].getPlaying();
                }     
            }            
        }
    }
    //We create a vector in Winners dynamic memory
    Players *vWinner = new Players [Nplayer];
     
    int contador = 0;
     
    /**Show name, points and runs of each player and add to vWinner
     to those who have opted 21 points*/
    
    for ( int i = 0; i<Nplayer; i++){
        
        cout<<endl;
        cout<<vPlayers[i].getName()<<endl;
        cout<<"Points: "<<vPlayers[i].getPuntos()<<endl;
        cout<<"Tiradas: "<<vPlayers[i].getNumeroTiradas();
        cout<<endl;
        
        if (vPlayers[i].getPuntos()==21){
            vWinner[contador]=vPlayers[i];
        }
    }
    /**We travel vWinner in search of the player with fewer runs*/
    int max=-999;
    int aux = 0;
    for ( int p=0; p<contador; p++){
        if (max< vPlayers[p].getNumeroTiradas()){
             aux = p;
             max = vPlayers[p].getNumeroTiradas();
        }
         
    }
    
    
    cout<<endl;
    cout<< "The winner is : "<< vWinner[aux].getName();
     
    delete [ ] vPlayers;
    delete [ ] vWinner;
             
    return 0;
}
