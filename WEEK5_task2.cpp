#include <iostream>
#include <cmath>

using namespace std;

float quadraticplus(float a1,float b1,float c1);
float quadraticminus(float a1,float b1,float c1);


main()

{


  float a1;
  float b1;
  float c1;
  float finalanswer1;
  float finalanswer2;
  
  cout << "Enter value of a = ";
  cin >> a1;
  cout << "Enter value of b = ";
  cin >> b1;
  cout << "Enter value of c = ";
  cin >> c1;

  finalanswer1 = quadraticplus(a1, b1, c1);
  cout << "Value of x is = ";
  cout << finalanswer1;

  finalanswer2 = quadraticminus(a1,b1,c1);
  cout << "Value of x is = ";
  cout << finalanswer2 << endl;


  }


float quadraticplus(float a1,float b1,float c1)

{

 float power;
  power = pow(b1,2);
float answer;
  answer = power - (4*(a1*c1));
float squareroot;
  squareroot=sqrt(answer);
float newanswer;
  newanswer = (-b1) + squareroot;
float finalanswer1;
  finalanswer1 = newanswer / (2*a1);

return finalanswer1;

}
 
float quadraticminus(float a1,float b1,float c1)

{


 float power;
  power = pow(b1,2);
float answer;
  answer = power - (4*(a1*c1));
float squareroot;
  squareroot=sqrt(answer);
float newanswer;
  newanswer = (-b1) - squareroot;
float finalanswer2;
  finalanswer2 = newanswer / (2*a1);

return finalanswer2;

}









