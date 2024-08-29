#include <iostream>
using namespace std;

main ()
{
    int size;
    cout << "Enter the number quantity = ";
    cin >> size;
    
    int array[size];
    for(int idx = 0;idx <size ; idx ++)
    {
        cin >> array[idx];
    }

    int small= 1000;

    for (int idx = 0;idx <size ; idx ++)
    {
        if(small > array[idx])
        small = array[idx];
    }
    cout << "SMALLEST NUMBER = " << small;
}

