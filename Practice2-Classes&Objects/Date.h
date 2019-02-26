/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 24 de febrero de 2019, 20:15
 */

#ifndef DATE_H
#define DATE_H

class Date {

private:
    
    int _day=0;
    int _month=0;
    int _year=0;

public:
    Date();
    
    Date ( int day, int month, int year );
    Date(const Date& orig);
    virtual ~Date();
    
    
    void  int setDay ( Day );
    int gettDay ();
    
    void int setMonth ( Month );
    int gettMonth();
    
    void int setYear ( Year );
    int getYear();
    
    


};

#endif /* DATE_H */

