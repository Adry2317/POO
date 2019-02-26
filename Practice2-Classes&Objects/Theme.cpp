/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Theme.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 24 de febrero de 2019, 18:38
 */

#include "Theme.h"

Theme::Theme() {
}

Theme::Theme( string _T, string_Per, int _D, int _S  ) : _title(_T), _performer(_Per),
                                                                                                _duration(_D),  _score(_S)
{
    
}

Theme::Theme(const Theme& orig): title(orig._title), performer(orig._performer), duration(orig._duration),
                                                                score(orig._score)
{
    
}

Theme::~Theme() {
}


void Theme::setTitle(string titulo){
    this->_title=titulo;
    
}

void Theme::SetDuration(int duracion){
    this->_duration = duracion;
    
    
}

void Theme::setPerformer(string interprete){
    this->_performer = interprete;
    
}