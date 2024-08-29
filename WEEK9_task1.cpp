#include <iostream>
using namespace std;

main()
{
    int array[5];
    int average = 0;
    for(int idx = 0 ;idx <5;idx ++)
    {
        cout << "Enter a number = ";
        cin >> array[idx];
        average = average + array[idx];
    }

    cout << average;


}