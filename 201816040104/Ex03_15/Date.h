#ifndef DATE_H
#define DATE_H

class Date
{
public:
   Date( int , int , int  ); // default constructor
   void setDate( int, int, int ); // set month, day, year
   void setMonth( int ); // set month
   void setDay( int ); // set day
   void setYear( int ); // set year
   int getMonth(); // get month
   int getDay(); // get day
   int getYear(); // get year
   void displayDate();
private:
   int month; 
   int day; 
   int year; 
}; 

#endif
