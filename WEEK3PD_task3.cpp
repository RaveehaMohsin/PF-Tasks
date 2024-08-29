#include <iostream>
using namespace std;

main()

{

int initialvelocity;
int acceleration;
int time;
int final_velocity;


cout << "Enter initial velocity = ";
cin >> initialvelocity;
cout << "Enter acceleration = ";
cin >> acceleration;
cout << "Enter time = ";
cin >> time;


final_velocity = (acceleration*time) + initialvelocity;

cout << "Final velocity = ";
cout << final_velocity;


}
