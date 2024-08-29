#include <iostream>
using namespace std;

main()
{

string name;
float matric;
float inter;
float ecat;
float obtainedmarks;
float obtainedmarks2;
float obtainedmarks3;
float aggregate;

cout << "Enter you name: ";
cin >> name;
cout << "Enter matric marks: ";
cin >> matric;
cout << "Enter inter marks: ";
cin >> inter;
cout << "Enter ecat marks: ";
cin >> ecat;

float ecat_percentage=(ecat/400)*(50) ;

float inter_percentage = (inter/550)*(40) ;

float matric_percentage =(matric/1100)*(10) ;

aggregate=ecat_percentage+inter_percentage + matric_percentage;

cout << "Your aggregate is : ";
cout << aggregate;


}

