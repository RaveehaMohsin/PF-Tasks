#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "How many resistors you want to add ? ";
    cin >> size;

    int array[size];
    
    cout << "Your resistances are = " << endl;

    for (int idx = 0 ; idx < size ; idx ++)
    {
        cin >> array[idx];
    }
    
    int sum = 0 ;
    for (int idx = 0 ; idx < size ; idx ++)
    {
        sum = sum + array[idx];
    }

    cout<< "SUM OF RESISTANCES IN SERIES IS = " << sum;
}