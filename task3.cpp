#include <iostream>
using namespace std;

int frequencyChecker(int number,int digit);

main()
{
    int number;
    int digit;
    int result;
    cout << "Enter a number = ";
    cin >> number;
    cout << "Enter the digit = ";
    cin >> digit;
    result = frequencyChecker(number,digit);
    cout << "Number of digits " << result;


}

int frequencyChecker(int number , int digit)
{
    int newnum = 0;
    int n1;
    int n2;
    while(n2 != 0)
    {
        n1= number % 10;
        n2 = number / 10;

        if (n1==digit)
        {  
          newnum= newnum + 1;
        }
        number = n2;
        
    }

    return newnum;

    
    
}