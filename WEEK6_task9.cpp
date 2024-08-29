#include <iostream>
#include <cmath>
using namespace std;

float result(float holidays,float weekend,string year);

main()
{

    float holidays;
    float weekend;
    string year;
    float answer;
    cout<< "LEAP YEAR OR NORMAL YEAR? : ";
    cin>> year;
    cout<<"THE COUNT OF HOLIDAYS : ";
    cin>> holidays;
    cout<< "ENTER THE COUNT OF WEEKENDS : ";
    cin>> weekend;
    answer = result( holidays, weekend, year);
    cout << answer;

}

float result(float holidays,float weekend,string year)
{
    float sofia;
    float notWorking;
    float time;

    if ( year=="leap" || year=="normal")

{
    sofia=holidays*(0.6667);
    notWorking=48*(0.75);
    time=sofia+notWorking;
    
}

 if (year=="leap")
 {
    time=time +(time*0.15);

 }
 
 time=floor(time);
 return time;

}




