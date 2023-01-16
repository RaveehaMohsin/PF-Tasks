#include <iostream>
using namespace std;
string activity(string temp , string humidity);

main()
{
    string temp;
    string humidity;
    string final;
    cout << "Enter Temperature: ";
    cin >> temp;
    cout << "Enter humidity level: ";
    cin >> humidity;
    final = activity( temp,humidity);
    cout << final;

}
string activity(string temp, string humidity)
{
    string play;
    if(temp == "warm" && humidity == "dry")
    {
        play = "Play Tennis";
    }

    if(temp == "warm" && humidity == "humid")
    {
        play = "Swim";
    }

    if(temp == "cold" && humidity == "dry")
    {
        play = "Play BasketBall";
    }

    if(temp == "cold" && humidity == "humid")
    {
        play = "Watch TV";
    }

    return play;


    
 
}