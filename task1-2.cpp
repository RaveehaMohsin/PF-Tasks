#include <iostream>
using namespace std;


int x = 10;
void myFunction();

void myFunction()

{
cout << "The value of x is = " << x <<endl;
int x = 28;

}

main()

{

myFunction();
int x = 30;
cout << "The value of x is = " << x << endl;
myFunction();

}