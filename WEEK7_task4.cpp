#include<iostream>
using namespace std;

int digitSum(int num);

int main()
{
    int num;
    int sum;
    cout << "Enter a number : ";
    cin >> num;
    sum = digitSum(num);
    cout << sum;
}

int digitSum(int num)
{
    int quotient;
    int remainder;
    int sum = 0;
    while (quotient != 0)
   {

     remainder = num % 10;
     quotient = num / 10;
    
    if(remainder != 0)
    {
        sum = sum + remainder;
    }
    
    num = quotient;
       
   }
   return sum;
   
    
    
}
