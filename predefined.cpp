#include <iostream>
#include<cmath>
using namespace std;

main()

{

  int num1;
  int num2;
  int greater;

  cout << "Enter a number = ";
  cin >> num1;
  cout << "Enter a number = ";
  cin >> num2;

  greater = max(num1,num2);
  cout << greater << " is greater ! " << endl;

  float num3;
  float num4;
  float large;



  cout << "Enter a number = ";
  cin >> num3;
  cout << "Enter a number = ";
  cin >> num4;
  

  large = max(num3,num4);
  cout << large << " is greater ! " << endl;

  int num5;
  int num6;
  int small;



  cout << "Enter a number = ";
  cin >> num5;
  cout << "Enter a number = ";
  cin >> num6;
  

  small = min(num5,num6);
  cout << small << " is smaller ! " << endl;


  int num7;
  int num8;
  int power;
  float squareroot;
  float cuberoot;


  cout << "Enter a number = ";
  cin >> num7;
  cout << "Enter a number = ";
  cin >> num8;
  

  power = pow(num7,num8);
  cout << power << " in power ! " << endl;
  squareroot = sqrt(num7);
  cout << squareroot << " in sqrt ! " << endl;
  cuberoot = cbrt(num7);
  cout << cuberoot << " in cbrt ! " << endl;


  
 
  







  

}