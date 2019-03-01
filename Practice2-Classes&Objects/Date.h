/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 1 de marzo de 2019, 12:17
 */

#ifndef DATE_H
#define DATE_H

class Date {

private:
    
    int _day;
    int _month;
    int _year;

public:
    Date();
    
    Date ( int day, int month, int year );
    Date(const Date& orig);
    virtual ~Date();
    
    
    void setDay ( int Day );
    int gettDay ();
    
    void  setMonth ( int Month );
    int gettMonth();
    
    void  setYear ( int Year );
    int getYear();
    
    


};

#endif /* DATE_H */


