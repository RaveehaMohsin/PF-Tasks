#include <iostream>
using namespace std;

main()
{
    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};
    int price = 500;
    string movie;
    cout << "Enter the movie you want to watch = ";
    getline(cin,movie);

    int total = 0;

   
    for (int idx = 1; idx<=5 ; idx ++)
    {
        if((movie == movies[idx]) && (idx % 2 ==0))
        {
            total = 500 - 50;
        }
        else if((movie == movies[idx]) && (idx % 2 !=0))
        {
            total = 500 - 25;
        }
    }

    cout << "Price of ticket is = " << total;
}