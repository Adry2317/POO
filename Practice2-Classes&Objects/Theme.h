/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Theme.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 24 de febrero de 2019, 18:38
 */

#ifndef THEME_H
#define THEME_H

class Theme {
private:
    string _title;
    string _performer;
    int _duration;
    int _score;


public:
    Theme();
    
    Theme( string _T = " ", string _Per = " ", int _D = 0, int_S = 0 ); //Constructor con parametros por defecto.      
    
    
    Theme(const Theme& orig);
    virtual ~Theme();

    void setTitle( string titulo );
    string gettTitle();
    
    void setPerformer ( string interprete );
    string gettPerformer ();

    void SetDuration ( int duracion );
    int gettDuration ();
};

#endif /* THEME_H */

