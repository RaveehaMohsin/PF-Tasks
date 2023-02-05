#include <iostream>
using namespace std;

main()

{
    int size;
    cout << "Enter the quantity = ";
    cin >> size;

    int array[size];

    cout << "ENTER THE NUMBERS : " << endl;
    for (int idx = 0 ; idx < size ; idx ++)
    {
        cin >>array[idx];
    }


    int average = 0;
    for(int idx = 0 ; idx < size ; idx ++)
    {
        average = average + array[idx];
    }
    cout << "SUM = " << average;
    cout << endl;  
    cout << "AVERAGE = " << average/size;
    
}