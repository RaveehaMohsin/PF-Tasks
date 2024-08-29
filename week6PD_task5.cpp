#include <iostream>
using namespace std;

float printBill(string fruit,string day,float quantity);

main()

{
    string fruit;
    string day;
    float quantity;
    float amount;

    cout << "Enter the fruit : ";
    cin >> fruit;
    cout << "Enter the day : ";
    cin >> day;
    cout << "Enter the quantity : ";
    cin >> quantity;
    amount = printBill(fruit,day,quantity);
    cout << "YOUR BILL IS = " << amount;

}

float printBill(string fruit,string day,float quantity)
{
    float amount;
    if((day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day== "friday") && fruit == "banana")
    {
       amount = quantity*2.50; 
    }

     if((day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day== "friday") && fruit == "apple")
    {
       amount = quantity*1.20; 
    }

     if((day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day== "friday") && fruit == "orange")
    {
       amount = quantity*0.85; 
    }

     if((day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day== "friday") && fruit == "grapefruit")
    {
       amount = quantity*1.45; 
    }

     if((day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day== "friday") && fruit == "kiwi")
    {
       amount = quantity*2.70; 
    }

     if((day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day== "friday") && fruit == "pineapple")
    {
       amount = quantity*5.50; 
    }

     if((day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day== "friday") && fruit == "grapes")
    {
       amount = quantity*3.85; 
    }

     if((day == "saturday" || day == "sunday") && fruit == "banana")
    {
       amount = quantity*2.70; 
    }

     if((day == "saturday" || day == "sunday") && fruit == "apple")
    {
       amount = quantity*1.25; 
    }

     if((day == "saturday" || day == "sunday") && fruit == "orange")
    {
       amount = quantity*0.90; 
    }

     if((day == "saturday" || day == "sunday") && fruit == "grapefruit")
    {
       amount = quantity*1.60; 
    }

     if((day == "saturday" || day == "sunday") && fruit == "kiwi")
    {
       amount = quantity*3.60; 
    }

     if((day == "saturday" || day == "sunday") && fruit == "pineapple")
    {
       amount = quantity*5.60; 
    }

     if((day == "saturday" || day == "sunday") && fruit == "grapes")
    {
       amount = quantity*4.20; 
    }

    return amount;













}
