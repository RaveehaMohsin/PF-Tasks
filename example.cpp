#include <iostream>
using namespace std;


void addition(int number1,int number2);

main()

{
int number1;
int number2;
cout << "Enter a number = ";
cin >> number1;
cout << "Enter a number = ";
cin >> number2;

addition(number1,number2);

}

void addition(int number1,int number2)

{

int sum;
sum = number1 + number2;
cout << "Sum is = ";
cout << sum;

}