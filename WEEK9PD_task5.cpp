#include <iostream>
using namespace std;
main()
{
    string array[4];
    cout << "Enter the elements = ";
    for (int idx = 0;idx < 4 ; idx ++)
    {
        cin >> array[idx];
    }
    string element = array[0];
    int count = 0;
    for (int idx = 0;idx < 4 ; idx ++)
    {
        if(element==array[idx])
        {
            count ++;
        }  

    }
    if(count == 4)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }

}