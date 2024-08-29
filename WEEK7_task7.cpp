#include <iostream>
using namespace std;

int calculateGCD(int num1,int num2);
int calculateLCM(int num1,int num2);

main()
{
    int num1;
    int num2;
    int gcd;
    int lcm;

    cout << "Enter your first number = ";
    cin >> num1;
    cout << "Enter your second number = ";
    cin >> num2;
    gcd =calculateGCD(num1,num2);
    cout << "GCD or HCF is = " << gcd;
    cout << endl;
    lcm =calculateLCM(num1,num2);
    cout << "LCM is = " << lcm;

}

int calculateGCD(int num1,int num2)
{
    int gcd;
    for(int count = 1;count <= num1 && count <= num2;count ++)
    {
        if(num1%count ==0 && num2%count ==0)
        {
            gcd = count;

        }
    }

    return gcd;
}

int calculateLCM(int num1,int num2)
{
    int lcm;
    int gcd;
    calculateGCD(num1,num2);
    lcm= (num1*num2)/gcd;
    return lcm;

    
}