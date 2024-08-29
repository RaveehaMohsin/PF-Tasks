#include <iostream>
using namespace std;

void ifTom(int holidays);


main()

{


int holidays;
cout << "Enter number of holidays = ";
cin >> holidays;
ifTom(holidays);

}

void ifTom(int holidays)

{

int workingdays;
workingdays = 365 - holidays;
int timeforgames;
timeforgames = (workingdays * 63 ) + (holidays * 127);
int difference;
difference = 30000 - timeforgames;
if(difference < 0)
{
difference = difference * -1;}
float hours;
hours = (difference/60);
float mins;
mins = (difference % 60);

if( timeforgames < 30000)

{ cout << "Tom sleeps well." <<endl;
  cout << hours;
 cout << "Hours and ";
  cout << mins;
 cout << "mins";
}


if (timeforgames > 30000)
{ cout << "Tom will run away." <<endl;
  cout << hours;
 cout << "Hours and ";
  cout << mins;
 cout << "mins";
}


}









