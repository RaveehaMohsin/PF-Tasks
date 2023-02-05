#include <iostream>
using namespace std;

float lowestPrice(int kilometers,string daynight);

main()

{
    int kilometers;
    string daynight;
    float result;
    cout << "ENTER THE KILOMETERS YOU WANT TO TRAVEL = ";
    cin >> kilometers;
    cout << "ENTER THE TIME PERIOD = ";
    cin >> daynight;
    result = lowestPrice(kilometers,daynight);
    cout << result;
    }

float lowestPrice(int kilometers,string daynight)
{
    float answer;
    if(kilometers < 20 && daynight== "day")
    {
        answer = (kilometers*0.79)+ 0.7;
    }

    else if (kilometers < 20 && daynight == "night")
    {
        answer = (kilometers * 0.9) + 0.7;
    }

    else if ((kilometers >= 20 && kilometers < 100) && (daynight == "day" || daynight == "night"))
    {
        answer = (kilometers*0.09);
    }

   
    else if(kilometers >= 100 &&  (daynight == "night" || daynight == "day"))
    {
        answer = (kilometers * 0.06);
    }

    return answer;

}
