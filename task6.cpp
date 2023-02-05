#include <iostream>
using namespace std;
main()
{
    int array[3];
    cout << "Enter the array = ";
    for(int idx = 0; idx < 3 ; idx ++)
    {
        cin >> array[idx];
    }
    int number;
    cout << "Enter the time even odd functions you want to be operated = ";
    cin >> number;
  for(int idx = 0; idx < 3 ; idx ++)
    {
      int finalanswer=0;

       if(array[idx] % 2 !=0)  
       {
         finalanswer= array[idx]+(2*number);
       } 

       else if(array[idx] % 2 ==0)  
       {
         finalanswer= array[idx]+(-2*number);
       } 

       cout << finalanswer << "," ;

    }
    
}