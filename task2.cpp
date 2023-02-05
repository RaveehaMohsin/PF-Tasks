#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter a size = ";
    cin >> size;

    int array[size];
    cout << "Your numbers are = ";
    for (int idx = 0 ; idx < size ; idx ++)
    {
        cin >> array[idx];
    }
    for (int idx = 0 ; idx < size ; idx ++)
    {
        cout << array[idx] << "," ;
    }
    

}