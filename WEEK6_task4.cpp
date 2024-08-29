#include <iostream>
using namespace std;

string speedinfo(float speed,string checkspeed);

main()

{
    float speed;
    string final;
    string checkspeed;
    cout << "Enter your speed = ";
    cin >> speed;
    final = speedinfo(speed,checkspeed);
    cout << final;

}

string speedinfo(float speed,string checkspeed)

{
    

    if (speed<= 10)
    { checkspeed = "SLOW";}

    else if(speed > 10 && speed <= 50)
    {
        checkspeed = "AVERAGE";
    }

    else if (speed >50 && speed <= 150)
    {
        checkspeed = "FAST";
    }

    else if (speed >150 && speed <= 1000)
    {
        checkspeed = "EXTREMELY FAST";
    }
     
     else
     {
        checkspeed = "INVALID INPUT";
     }

     return checkspeed;
}