#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date

Date::Date( int m, int d, int y )
{
   setDate( m, d, y ); // sets date
} // end Date constructor

void Date::setDate( int mo, int dy, int yr )
{
   setMonth( mo ); // invokes function setMonth
   setDay( dy ); // invokes function setDay
   setYear( yr ); // invokes function setYear
} // end function setDate

void Date::setDay( int d )
{
   day=d;
} // end function setDay

void Date::setMonth( int m )
{
   if(m>=1&&m<=12);

       month=m;

   else

       m=1;

}
void Date::setYear( int y )
{
   year = y; // sets year
} // end function setYear

int Date::getDay()
{
   return day;
} // end function getDay

int Date::getMonth()
{
   return month;
} // end function getMonth

int Date::getYear()
{
   return year;
} // end function getYear

void Date::displayDate()
{
   cout << Date.getDay() << '/' <<Date.getMonth() << '/' << Date.getYear() << '\n'; // outputs date
} // end function print
