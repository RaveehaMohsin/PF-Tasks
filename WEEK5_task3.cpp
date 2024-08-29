#include <iostream>
#include <cmath>
using namespace std;

bool isSymmetrical(int number);
main()

{

 bool isTrue;
 int number;
 
 
 cout << "Enter a 3 digit number = ";
 cin >> number;
 isTrue=isSymmetrical(number);

 if(isTrue== true)

 { cout << isTrue; }

 if (isTrue == false)

{ cout << isTrue ; }

 
}



bool isSymmetrical(int number)

{
 int q1;
 int r1;
 int q2;
 int r2;
 q1 = number / 10;
 r1 = number % 10;
 q2 = q1 / 10;
 r2= q1 % 10;


 if ( r1 == q2 )

   {
    return true; 
   }

 if(r1 != q2)

  {
  return false; 
  }
 
  return 0;

}


