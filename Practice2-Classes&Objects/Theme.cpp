/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Theme.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 1 de marzo de 2019, 12:00
 */

#include "Theme.h"

Theme::Theme():_title(""), _performer(""), _duration(0), _score(0) {
}

Theme::Theme( string title, string performer, int duration, int score  ) : _title(title), _performer(performer),
                                                                                                _duration( duration ),  _score(score)
{
    
}

Theme::Theme(const Theme& orig): _title(orig._title), _performer(orig._performer), _duration(orig._duration),
                                                                _score(orig._score)
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

void Theme::setScore(int score){
    this->_score = score;
}

string Theme::gettTitle(){
    return (this->_title );
}

int Theme::gettDuration() {
  return ( this->_duration );
}

string Theme::gettPerformer() {
   return (this->_performer);
}

int Theme::getScore(){
    return (this->_score);
    
}