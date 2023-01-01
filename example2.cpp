#include <iostream>
using namespace std;

void printname(string name);

main ()

{
 
printname("Bilal");
cout << endl;
string secondname;
cout << "Enter a name : ";
cin >> secondname;
printname(secondname);

}

void printname(string name)

{

cout << "Your name is : ";
cout << name ;

}