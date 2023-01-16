#include <iostream>
using namespace std;

float printBill(char servicecode,char daynight,float mins);
main()
{
    char servicecode;
    char daynight;
    float mins;
    float answer;
    cout << "Enter the service code = ";
    cin>> servicecode;
    cout << "Enter the number of mins you used the service = ";
    cin >> mins;
    if(servicecode == 'p')
    {
        cout << "Press d for day and n for night = ";
        cin >> daynight;
    }
    
    answer =  printBill(servicecode,daynight,mins);
    cout << answer;
    
}

float printBill(char servicecode,char daynight,float mins)
{
   float answer;

    if(servicecode== 'r' && mins<=50)
    {
        answer = 10.00;
    }

    if(servicecode== 'r' && mins > 50)
    {
        answer= (0.2*mins)+10.00;
    }
    
    if(servicecode == 'p' && daynight== 'd' && mins <= 75)
    {
        answer = 25.00;
    }

    if(servicecode== 'p'&& daynight == 'n' && mins <=100)
    {
        answer = 25.00;
    }

     if(servicecode== 'p'&& daynight == 'd' && mins >75)
    {
        answer = (mins*0.10)+25.00;
    }

     if(servicecode== 'p'&& daynight == 'n' && mins > 100)
    {
        answer = (0.05*mins)+ 25.00;
    }
     return answer;


}
