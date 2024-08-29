#include <iostream>
using namespace std;

char smallcase(char value);
char capitalcase(char value2);

main()

{


char alphabet;
char value;
char value2;

cout << "Enter your alphabet = ";
cin >> alphabet;


if(value=smallcase(alphabet))
{
cout << "You have entered small " << value;
}

if (value2=capitalcase(alphabet))
{
cout << "You have entered capital " << value2;
}

}


char smallcase(char value)

{

  if( value >= 'a' &&  value <= 'z')

{
   return value;
}
   return 0;


}


char capitalcase(char value2)

{



   if (value2 >= 'A' && value2 <= 'Z')


   {
      return value2;
                
   }
     return 0;

}
