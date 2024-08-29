#include <iostream>
using namespace std;

main()
{
    int array[2];
    cout << "Enter first number of first ray = ";
    cin >> array[0];
    cout << "Enter second number of first ray = ";
    cin >> array[1];

    int size;
    cout << "numbers in second ray = ";
    cin >> size;

    int array2[size];
    for(int idx = 0;idx <size ; idx ++)
    {
        cin >> array2[idx];
    }
    
    cout << "[" <<array[0] << "," ;
    for(int idx = 0;idx <size ; idx ++)
    {
        cout << array2[idx] << ",";
    }
    cout << array[1] << "]";
    


}