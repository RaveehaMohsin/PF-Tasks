#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter a number = ";
    cin >> number;
    int num1 = 0;
    int num2 = 1;
    int sum;
    cout << num1 << "," << num2;

    for(int count = 1 ; count <= number-2 ; count = count+1 )
    {
        sum = num1+num2;
        cout << "," << sum;
        num1 = num2;
        num2 = sum;
    }


    
}