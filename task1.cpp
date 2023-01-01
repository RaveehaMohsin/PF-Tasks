#include <iostream>
using namespace std;

void add(int number1, int number2);
void multiplication(int number1, int number2);
void subtraction (int number1,int number2);
main ()

{

int number1;
int number2;
char operation;
while(true)
{
cout << "Enter a number = ";
cin >> number1;
cout << "Enter a number = ";
cin >> number2;
cout << "Enter a operation = ";
cin >> operation;

if(operation == '+')

{
add(number1,number2);
cout << endl;
}
if(operation == '*')
{
multiplication(number1,number2);
cout << endl;
}

if(operation == '-')
{

subtraction(number1,number2);
}

if (operation == '/')
{
 cout << "Operation not applicable.";


}

}
}

void add(int number1, int number2)

{

int sum;
sum = number1 + number2;
cout << "Sum is = ";
cout << sum ;

}


void multiplication(int number1, int number2)

{

int product;
product = number1 * number2;
cout << "Your product is = ";
cout << product ;

}


void subtraction (int number1,int number2)

{

int subtract;
subtract = number1 - number2;
cout << "Subtraction = ";
cout << subtract;




}
