#include <iostream>
using namespace std;


void ifSpeed(int speed);

main()

{

int speed;
while(1){
cout << endl;
cout << "Enter your speed = " ;
cin >> speed;

ifSpeed(speed);
}


}

void ifSpeed(int speed)
{


if(speed == 100)
{ cout << "Perfet..you are going good!!"; }

if (speed > 100)
{ cout << "Halt..YOU WILL BE CHALLENGED!!!" ; }

if (speed < 100)
{ cout << "Perfet..you are going good!!"; }


}
