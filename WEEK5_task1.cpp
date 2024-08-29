#include <iostream>
#include <cmath>

float calculateheight(float base,float angle);

using namespace std;

main()

{
  float base;
  float angle;
  float height;
  cout << "Enter base = ";
  cin >> base;
  cout << "Enter angle = ";
  cin >> angle;
 
 

 height =  calculateheight(base, angle);
 cout << "Your height is = ";
 cout << height;
 





}


float calculateheight(float base,float angle)

{


float radians;
radians = 57.2958;
float degrees;
float tanans;
float height;

degrees = angle / radians;

 tanans = tan(degrees);

   height = tanans*base;

return height;

}
