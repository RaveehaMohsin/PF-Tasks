#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the number of colors in array = ";
    cin >> size;
    string array[size];
    cout << "Enter the colors : ";
    for(int idx = 0; idx<size;idx ++)
    {
        cin >> array[idx];
    }

   int answer = size*2;
   int count=0;
   string element= array[0];
    for(int idx = 1; idx<size;idx ++)
    {
        if(element!=array[idx])
        {
            count ++;
            element = array[idx];

        }

    }
    int finalresult= answer + count;

    cout << finalresult;

}