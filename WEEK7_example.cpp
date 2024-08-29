#include<iostream>
using namespace std;

main()
{
    int number ;
    cout << "Enter a number = ";
    cin >> number;

    while(number!=7)
    {
        cout << "INVALID NUMBER" << endl;
        cout << "Enter a number = ";
        cin >> number;
    }

    string option;
    cout << "Are you happy ? : ";
    cin>> option;

    while(option != "yes")
    {
        cout << "Wrong answer!!!" << endl;
        cin >> option;
    }

    for(int count = 0; count <= 100; count = count + 2)
    {
        cout << count << endl;
    }

    int sum = 0;
    for (int count = -1 ; count <= 5 ; count = count + 1)
    {
        sum = sum + count;
    
    }
    cout << "sum is: " << sum;


}