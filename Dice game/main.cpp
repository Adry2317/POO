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
    
   
     
    
    /**Recorremos Vplayer en el peor de los casos 21 veces o hasta que todos
     los jugadores tenga una puntuacion mayor o igual a 21*/
    
     for ( int i = 0; i< 21|| keepPlaying; i++ ){
        keepPlaying = false;
        
        /**Recorremos el vector de jugadores*/
        for ( int j = 0; j<Nplayer; j++ ){
            
            //Si todabia puede segur jugando...
            if (vPlayers[j].getPlaying() == true ){
                //Lanzamos el dado
                int tirada =vPlayers[j].LanzarDado();
                //Sumamos la puntuacion del dado a los puntos de jugador
                vPlayers[j].setNumPuntos(tirada+ vPlayers[j].getPuntos());
                //Incrementamos en 1 el numero de tiradas
                vPlayers[j].setNumTiradas(vPlayers[j].getNumeroTiradas() + 1 );
                
                //Y comprovamos si con esta ultima tirada ha obtenido 21 o mas
                if( vPlayers[j].getPuntos() >= 21 ){
                    
                    //Si es asi, decimos que este jugador no puede seguir jugando
                    vPlayers[j].setPlaying( false );
                    
                    //Sumamos el estado de este jugador al estado del juego general
                    keepPlaying += vPlayers[j].getPlaying();
                }     
            }            
        }
    }
    //Creamos un vector en memoria dinamica de Ganadores
    Players *vWinner = new Players [Nplayer];
     
    int contador = 0;
     
    /**Mostrar nombre, puntos y tiradas de cada jugador y añadir a vWinner
    a los que hayan optenido 21 puntos*/
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
    /**Recorremos vWinner en busca del jugador con menos tiradas*/
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
