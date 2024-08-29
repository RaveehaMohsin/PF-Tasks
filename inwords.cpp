#include<iostream>
using namespace std;

string output1(int num1);
string output2(int num2);

main()


{
 int input;
 int num1;
 int num2;
 string no1;
 string no2;

 cout << "Enter Your Number : ";
 cin>> input;

  num1=input/10; 
  num2=input%10;

 
  no1=output1(num1);
  no2=output2(num2);

  cout<<no1<<" "<<no2<<endl;

 }


string output1(int num1)

 {
 if(num1==0)
 {
 return "";
 }
 if(num1==1)
 {
 return "ten";
 }
 if(num1==2)
 {
  return "twenty";
 }
  if(num1==3)
 {
  return "thirty";
 }
  if(num1==4)
 {
  return "fourty";
 }
  if(num1==5)
 {
  return "fifty";
 }
  if(num1==6)
 {
  return "sixty";
 }
  if(num1==7)
 {
  return "seventy";
 }
  if(num1==8)
 {
  return "eighty";
 }
  if(num1==9)
 {
  return "ninety";
 }
 return 0; 
}
string output2(int value2)
 {
  if(value2==0)
 {
  return " ";
 }
  if(value2==1)
 {
  return "one";
 }
  if(value2==2)
 {
  return "two";
 }
  if(value2==3)
 {
  return "three";
 } 
  if(value2==4)
 {
  return "four";
 }
  if(value2==5)
 {
  return "five";
 }
  if(value2==6)
 {
  return "six";
 }
  if(value2==7)
 {
  return "seven";
 }
  if(value2==8)
 {
  return "eight";
 }
  if(value2==9)
 {
  return "nine";
 }
return 0;
}
 