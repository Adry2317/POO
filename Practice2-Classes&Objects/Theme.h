/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Theme.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 1 de marzo de 2019, 12:00
 */

#ifndef THEME_H
#define THEME_H
#include <iostream>
using namespace std;

class Theme {
    private:
    string _title;
    string _performer;
    int _duration;
    int _score;
    
public:
    Theme() ;
    
    Theme( string tile, string _performer, int duration, int score= 0 );
    
    Theme(const Theme& orig);
    virtual ~Theme();
    
     void setTitle( string titulo );
    string gettTitle();
    
    void setPerformer ( string interprete );
    string gettPerformer ();

    void SetDuration ( int duracion );
    int gettDuration ();

    void setScore ( int score );
    int getScore();
};

#endif /* THEME_H */

