#include <iostream>
using namespace std;

main()
{
    float arr[4];
    float totalDue;

    
    cout << "Enter the change in quarters = ";
    cin >> arr[0];
    cout << "Enter the change in dimes = ";
    cin >> arr[1];
    cout << "Enter the change in nickels = ";
    cin >> arr[2];
    cout << "Enter the change in pennies = ";
    cin >> arr[3];

    cout << "Enter the total due = ";
    cin >> totalDue;

    float newQuarters;
    float newDimes;
    float newNickels;
    float newPennies;
    float sum;

    newQuarters= ((arr[0] * 25) / 100 );

    newDimes= ((arr[1] * 10) / 100 );

    newNickels= ((arr[2] * 5) / 100 );

    newPennies= ((arr[3] * 1) / 100 );

    sum = newQuarters+newPennies+newNickels+newDimes;

    if(sum >= totalDue)
    {
        cout << "TRUE";
    }

    else
    {
        cout << "FALSE";
    }

    


    

}