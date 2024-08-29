#include <iostream>
using namespace std;

main ()

{

float megabytes;
megabytes=1024;
float kilobytes;
kilobytes=1024;
float bytes;
bytes = 8 ;
float input ;
float conversion;

cout << "Enter megabytes : ";
cin >> input ;
conversion = input*megabytes*kilobytes*bytes;


cout << " answer in bits is: " ;
cout << conversion;


}








