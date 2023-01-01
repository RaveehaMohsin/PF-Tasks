#include <iostream>
using namespace std;

void ifTF(string truefalse);

main()

{

string truefalse;
cout << "choose true or false :  ";
cin >> truefalse;
ifTF(truefalse);


}

void ifTF(string truefalse)

{

if(truefalse == "true")
{ cout << "False" ; }

if (truefalse == "false")

{ cout << "True" ; }

}