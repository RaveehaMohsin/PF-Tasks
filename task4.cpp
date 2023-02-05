#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the number quantity = ";
    cin >> size;
    
    int array[size];
    cout << "Enter your numbers = ";
    for(int idx = 0;idx <size ; idx ++)
    {
        cin >> array[idx];    
    }
    for(int idx = size-1 ;idx >= 0 ; idx --)
    {
        cout << array[idx] << ",";
    }


}