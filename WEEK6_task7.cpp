#include <iostream>
using namespace std;

float checkCost(string city,string product, float quantity);
main()
{
    string city;
    string product;
    float quantity;
    float result;

    cout << "Enter the city name : ";
    cin >> city;
    cout << "Enter the product you want to buy = ";
    cin >> product;
    cout << "Enter the quantity : ";
    cin >> quantity;
    result = checkCost( city, product,quantity);
    cout << result ;


}
float checkCost(string city,string product, float quantity)
{    
    float answer;
    if (city == "sofia" && product == "coffee")
    {
         answer = quantity*0.50;
    }
    if (city == "plovdiv" && product == "coffee")
    {
         answer = quantity*0.40;
    }
    if (city == "varna" && product == "coffee")
    {
         answer = quantity*0.45;
    }
    if (city == "sofia" && product == "water")
    {
         answer = quantity*0.80;
    }
    if (city == "plovdiv" && product == "water")
    {
         answer = quantity*0.70;
    }
    if (city == "varna" && product == "water")
    {
         answer = quantity*0.70;
    }
    if (city == "sofia" && product == "beer")
    {
         answer = quantity*1.20;
    }
    if (city == "plovdiv" && product == "beer")
    {
         answer = quantity*1.15;
    }
    if (city == "varna" && product == "beer")
    {
         answer = quantity*1.10;
    }
    if (city == "sofia" && product == "sweets")
    {
         answer = quantity*1.45;
    }
    if (city == "plovdiv" && product == "sweets")
    {
         answer = quantity*1.30;
    }
    if (city == "varna" && product == "sweets")
    {
         answer = quantity*1.35;
    }
    if (city == "sofia" && product == "peanuts")
    {
         answer = quantity*1.60;
    }
    if (city == "plovdiv" && product == "peanuts")
    {
         answer = quantity*1.50;
    }
    if (city == "varna" && product == "peanuts")
    {
         answer = quantity*1.55;
    }

    return answer;

}