#include <iostream>
using namespace std;

float ifCubiccentimeter(float length,float width,float height,string outputunit);
float ifCubickilometer(float length,float width,float height,string outputunit);
float ifCubicmillimeter(float length,float width,float height,string outputunit);
float ifCubicmeter(float length,float width,float height,string outputunit);
main()

{

float length;
float width;
float height;
string outputunit;
float answer;
float answer1;
float answer2;
float answer3;

cout << "Enter the length: ";
cin >> length;
cout << "Enter the width: ";
cin >> width;
cout << "Enter the height: ";
cin >> height;
cout << "Enter the output unit : ";
cin >> outputunit;

if(outputunit == "cubiccentimeter") 
{answer=ifCubiccentimeter( length, width, height, outputunit);
cout << "Your result = ";
cout << answer;}

if(outputunit == "cubickilometer") 
{answer1=ifCubickilometer(length,width,height,outputunit);
cout << "Your result = ";
cout << answer1;}

if(outputunit == "cubicmillimeter") 
{answer2 = ifCubicmillimeter(length, width,height, outputunit);
cout << "Your result = ";
cout << answer2;}

if(outputunit == "cubicmeter") 
{answer3 =ifCubicmeter(length,width, height, outputunit);
cout << "Your result = ";
cout << answer3;}


}

float ifCubiccentimeter(float length,float width,float height,string outputunit)
{
if(outputunit == "cubiccentimeter")
{float answer;
answer = ((length*height*width)/3)*(100*100*100);
return answer;}

}

float ifCubickilometer(float length,float width,float height,string outputunit)

{
if(outputunit == "cubickilometer")
{float answer1;
answer1 = ((length*height*width)/3)/(1000*1000*1000);
return answer1;}

}


float ifCubicmillimeter(float length,float width,float height,string outputunit)
{
if(outputunit == "cubicmillimeter")
{float answer2;
answer2 = ((length*height*width)/3)*(1000*1000*1000);
return answer2;}

}

float ifCubicmeter(float length,float width,float height,string outputunit)
{
if(outputunit == "cubicmeter")
{float answer3;
answer3 = ((length*height*width)/3);
return answer3;}
return 0;
}


