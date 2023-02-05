#include<iostream>
using namespace std;

main()
{
  int hours;
  int mins;
  int aftermins;
  int afterhours;
  while (true)
 {
 cout<< "ENTER HOURS : ";
 cin>> hours;
 cout<< " ENTER MINUTES : ";
 cin>> mins;
 
 if((mins+15)<=59)
 {
  aftermins=mins+15;
  afterhours=hours;
  cout << "TIME AFTER 15 MINS IS : "<<afterhours <<":"<< aftermins << endl ;
 }


 if((mins+15)>59)
 {
  aftermins=(mins+15)-60;
  afterhours=hours+1;
    if(afterhours==24)
     {
         afterhours  =00;
     }
  cout << "TIME AFTER 15 MINS IS : "<<afterhours<<":" << aftermins <<endl ; 

 } 

}

} 


  
 