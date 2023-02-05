#include <iostream>
using namespace std;

main()
{
    string fruit[4] ={"peach","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};
    int quantity;
    string fruitname;

    cout << "Enter the fruit you want to buy = ";
    cin >> fruitname;
    cout << "Enter the quantity of fruit = ";
    cin >> quantity;

    int total=0;

    for(int idx = 0;idx <5 ; idx++)
    {
        if(fruitname == fruit[idx])
        {
        total = quantity*price[idx];
        break;
        }

    }

    cout << "The total bill is = " << total;
    
   

}