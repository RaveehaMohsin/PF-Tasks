#include <iostream>
using namespace std;

main()
{
    int arr[5] = {1,2,3,4,5};

    cout << "Element of the 0th index = ";
    cout << arr[0] << endl;
    cout << "Element of the 1st index = ";
    cout << arr[1] << endl;
    cout << "Element of the 2nd index = ";
    cout << arr[2] << endl;
    cout << "Element of the 3rd index = ";
    cout << arr[3] << endl;
    cout << "Element of the 4th index = ";
    cout << arr[4] ;
    cout << endl;

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