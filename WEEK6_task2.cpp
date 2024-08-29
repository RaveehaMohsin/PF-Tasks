#include <iostream>
using namespace std;

float discount(string day,string month,float amount);

main()
{
    string day;
    string month;
    float amount;
    float final;

    cout << "Enter the day = ";
    cin >> day;
    cout << "Enter the month = ";
    cin >> month;
    cout << "Enter your amount = ";
    cin >> amount;
   final = discount(day,month,amount);
   cout << "Your amount after discount is =  " << final;
}

float discount(string day,string month,float amount)
{   
    float discount1;
    float final;
    
    if(day == "sunday" && (month == "october" || month == "march" || month == "august"))
   {

    discount1 = amount*0.1;
    final = amount - discount1;

   }

   else if( day == "monday" && (month == "november" || month == "december"))

   {

    discount1 = amount*0.05;
    final = amount - discount1;

   }

   else
   {
    final = amount;
   }

    return final;

}