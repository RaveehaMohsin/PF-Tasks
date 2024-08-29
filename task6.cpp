#include <iostream>
using namespace std;

void greaterNumber(int number1,int number2);

main()

{

while(true){
int number1;
int number2;
cout << "Enter a number = ";
cin >> number1;
cout << "Enter a number = ";
cin >> number2;

greaterNumber(number1,number2);

}
}


void greaterNumber(int number1,int number2)

{
if(number1 > number2)
{
 cout << " Greater Number = ";
 cout << number1;
}
if (number2 > number1)
{
    cout << " Greater Number = ";
      cout << number2;


}






}


