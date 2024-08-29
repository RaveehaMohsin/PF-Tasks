#include <iostream>
using namespace std;

main()
{
    int size;
    bool found = false;
    cout << "Enter the number quantity = ";
    cin >> size;
    
    int array[size];
    for(int idx = 0;idx <size ; idx ++)
    {
        cin >> array[idx];
    }

    int number;
    cout << "Enter the number you want to find = ";
    cin >> number;
    for(int idx = 0;idx <size ; idx ++)
    {
        if(number == array[idx])
        {
            found = true;
            break;
        }
    } 
    if (found == false)
    
        {
            cout << "NUMBER NOT YET PRINTED";
        }  
     else 
     {
        cout << "ALREADY PRINTED";
     }
}