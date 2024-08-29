#include <iostream>
using namespace std;

main() 

{
 

string name;
float matric;
float inter;
float ecat;
float matricper;
float interper;
float ecatper;
float aggregate;




cout << "Enter your name : ";
cin >> name;
cout << "Enter your matric marks : ";
cin >> matric;
cout << "Enter your inter marks : ";
cin >> inter;
cout << "Enter your ecat marks : ";
cin >> ecat;


matricper = ((matric/1100)*(100))*(0.1);
interper = ((inter/550)*(100))*(0.4);
ecatper = ((ecat/400)*(100))*(0.5);

aggregate= matricper+interper+ecatper;







cout << "Your aggregate is : ";
cout << aggregate;

}




