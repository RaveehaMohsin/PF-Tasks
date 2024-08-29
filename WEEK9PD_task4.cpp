#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter how many digits you want to add = ";
    cin >> size;
    int array[size];
    int quotient = 0;
    int remainder = 0;

    for(int idx = 0;idx < size ; idx ++)
    {
        cin >> array[idx];
    }
 int counter1=0;
    for(int idx = 0;idx < size ; idx ++)
    {
    
        while(idx!=size)
        {
            quotient = array[idx] / 10;
            remainder = array[idx] % 10;
            if(remainder == 7)              
            {
                counter1 ++;
            }

            
           if(quotient == 0)
            {
                break;
            }
            array[idx] = quotient;
         }

    }
     if (counter1 == 0)
     {
        cout << "NO 7 IN THE ARRAY";
     }
     else
     {
        cout << "BOOM";
     }
    

    


}