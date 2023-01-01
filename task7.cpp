#include <iostream>
using namespace std;



void totalAmount(string day,int amount);

main()

{
  string day;
  int amount;
   cout << "Enter the day = ";
    cin  >> day;
    cout << "Enter a amount = ";
    cin >> amount;
   totalAmount(day,amount);

}


void totalAmount(string day,int amount)

{

 if(day == "sunday")
{
 float bill;
 float totalcash;
  bill = 0.1*amount;
  totalcash = amount - bill;
  
 cout << "Your total bill is = ";
 cout << totalcash;


}


if (day != "sunday"){


cout << "Your bill is = ";
cout << amount;

}



}