#include <iostream>
using namespace std;

main()

{

float megabytes;
float conversion;





cout << "Enter megabytes : ";
cin >> megabytes;

conversion = 1024*1024*8*megabytes;

cout << "Answer in bits is : " ;
cout << conversion;

}