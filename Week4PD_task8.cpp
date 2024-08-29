#include <iostream>
using namespace std;


void ifEqual(int number1, int number2);

main()

{



int number1;
int number2;
cout << "Enter a number = " ;
cin >> number1;
cout << "Enter a number = " ;
cin >> number2;

ifEqual( number1, number2);


}


void ifEqual(int number1, int number2)

{

if(number1==number2)

{cout << "Both numbers are equal.Hence,True.";}


if(number1 != number2)
{cout << "Both numbers are not equal.Hence,False.";}


}


 
