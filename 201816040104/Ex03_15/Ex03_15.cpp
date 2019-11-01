#include <iostream>

#include "Date.h"// include definitions of class Date

using namespace std;
int main()
{
    int mo,da,ye;
    cout<<"the month is:"<<endl;
    cin>>mo;
    cout<<"the date is:"<<endl;
    cin>>da;
    cout<<"the year is:"<<endl;
    cin>>ye;
    Date date(int,int,int);
    date.setMonth();
    date.setDay();
    date.setYear();
    date.displayDate();
}
