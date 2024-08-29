#include <iostream>
using namespace std;

float ifCubicmeter(float length,float width,float height,string outputunit);

main()

{

float length;
float width;
float height;
string outputunit;
float result;


cout << "Enter the length: ";
cin >> length;
cout << "Enter the width: ";
cin >> width;
cout << "Enter the height: ";
cin >> height;
cout << "Enter the output unit : ";
cin >> outputunit;

result=ifCubicmeter(length,width,height, outputunit);
cout << "RESULT IS = ";
cout << result;

}



float ifCubicmeter(float length,float width,float height,string outputunit)

{



if(outputunit == "cubiccentimeter")
{float answer;
answer = ((length*height*width)/3)*(100*100*100);
return answer;}




if(outputunit == "cubickilometer")
{float answer1;
answer1 = ((length*height*width)/3)/(1000*1000*1000);
return answer1;}






if(outputunit == "cubicmillimeter")
{float answer2;
answer2 = ((length*height*width)/3)*(1000*1000*1000);
return answer2;}





if(outputunit == "cubicmeter")
{float answer3;
answer3 = ((length*height*width)/3);
return answer3;}
return 0;

}






