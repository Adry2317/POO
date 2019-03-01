/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 1 de marzo de 2019, 12:17
 */

#include "Date.h"
#include <ctime>


Date::Date() {
    //Gets the currents time.
std::time_t currentTime = std::time(0);    

//Convert the current tim into something that we can work whith.
std::tm* ctConverted = std::localtime(&currentTime);

//Assign the values to the ...
this->_day= ctConverted->tm_mday;
this->_month = ctConverted->tm_mon;
this->_year = ctConverted->tm_year+ 1900;        
 

}

Date::Date(const Date& orig) {
}

Date::~Date() {
}

Date::Date(int day, int month, int year):_day(day),_month(month),_year(year){
    
    
}


void Date::setDay(int Day){
    this-> _day = Day;
    
}

void Date::setMonth(int Month){
    this->_month = Month;
    
}

void Date::setYear(int Year){
    this->_year = Year;
}

int Date::getYear(){
    return _year;
}

int Date::gettMonth(){
    return _month;
}

int Date::gettDay(){
    return _day;
}