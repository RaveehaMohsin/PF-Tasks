#include <iostream>
using namespace std;

float addition (float num1,float num2);
float division (float num1, float num2);
int maximum(int num3, int num4);


main()

{


  float num1;
  float num2;
  float result;
  float total;

 cout << "Enter a digit = ";
 cin >> num1;
 cout  << "Enter a digit = ";
 cin >> num2;
 result = division ( num1,  num2);
 cout << "Your result for division = ";
 cout << result;
 total= addition (num1,num2);
 cout << "Your result for addition = ";
 cout << total;

  int num3;
  int num4;
  int large;

 cout << "Enter number= ";
 cin >> num3;
 cout << "Enter number = ";
 cin >> num4;
 large = maximum(num3,num4);
 cout << large << "is greater number !"  << endl;





}

float addition (float num1,float num2)

{


  float sum;
  sum = num1 + num2;
  return sum;

}

float division (float num1,float num2)

{

 float division;
 division = num1 /num2;
 return division;

}


int maximum(int num3, int num4)

{

 if(num3 > num4)
 {return num3;}



 if (num4> num3)
 {return num4;}

 return 0;


}
