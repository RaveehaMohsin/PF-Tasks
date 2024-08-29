#include <iostream>
using namespace std;

float calculateMoney(int age,float priceWM,int pricetoys);

main()
{
    int age;
    float priceWM;
    int pricetoys;
    int finalprice;
    cout << "Enter your age = ";
    cin >> age;
    cout << "Enter the price of washing machine = ";
    cin >> priceWM;
    cout << "Enter price of each toy = ";
    cin >> pricetoys;
    finalprice = calculateMoney(age, priceWM, pricetoys);
    
    if (finalprice <0 )
    {
        finalprice = finalprice*-1;
        cout << "NO!!" << endl << finalprice;
    }

    else if (finalprice>= 0)
    {
        cout << "YES!!" << endl << finalprice;
    }
    


}

float calculateMoney(int age,float priceWM,int pricetoys)
{
    int even;
    int odd;
    if (age % 2 == 0)
    {
        even = age / 2;
        odd = even;

    }

    else if (age % 2 != 0)
    {
        odd = (age / 2) + 1;
        even = (age / 2);
    }
   
    int baseprice=10;
    int evenmoney=0;
    for(int counter = 1; counter <= even;counter = counter+ 1)
    { 
        evenmoney = evenmoney+baseprice ;
        baseprice=baseprice+10;
    }

    evenmoney= evenmoney - even;

        
        
    
    int oddmoney;
    oddmoney = (pricetoys*odd);

    int total;
    total = evenmoney + oddmoney;

    int finalprice;
    finalprice = total -  priceWM ;
    
    
    
    return finalprice;
    


    
}

