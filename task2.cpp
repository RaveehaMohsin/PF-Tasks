#include <iostream>
using namespace std;

void ifPass(int marks);

main()

{
int marks;
  while(true)
{


  cout << "Enter your marks = ";
  cin >> marks ;
  cout << endl;
  ifPass(marks);

}

}


void ifPass(int marks)
{

  if (marks > 50)
{

   cout << "You have passed the first quiz of PF" << endl;

}

  if (marks == 50)
{

   cout << "Marks are fifty"<< endl;

}

  if(marks < 50)
{

   cout << "You have failed the PF" << endl;

}



}
