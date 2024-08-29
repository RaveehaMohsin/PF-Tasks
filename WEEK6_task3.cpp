#include <iostream>
using namespace std;

string checkTitle (char gender, int age);

main()

{
    char gender;
    int age;
    string final;
    cout << "Enter your age = ";
    cin >> age;
    cout << "Enter the gender = ";
    cin >> gender;
    final = checkTitle (gender,age);
    cout << final;


}

string checkTitle (char gender, int age)

{
   string title;

   if (gender == 'm' && age >= 16)
   {
    title = "Mr.";
   }

   else if(gender == 'm' && age < 16)

   {
    title = "Master";
   }

   else if(gender == 'f' && age >= 16)
   {
    title = "Ms.";
   }

   else if(gender == 'f' && age < 16)

{
    title = "Miss";
}

 else
 {
    title = "false";
 }
  return title;
}