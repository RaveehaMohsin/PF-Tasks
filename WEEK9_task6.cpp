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

    int newNumber;
    cout << "Enter the number you want to multiply = ";
    cin >> newNumber;

    int answer=0;

    for (int idx = 0;idx <size ; idx ++)
    {
        answer = newNumber*array[idx];
        cout << newNumber << "*" << array[idx] << "=" << answer << endl;
    }
}