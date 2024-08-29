#include<iostream>
using namespace std;

void ifPrice(int redrose,int whiterose, int tulips);

main()

{

int redrose;
int whiterose;
int tulips;
while(true)
{
cout << endl;
cout << "Number of red roses = " ;
cin >> redrose;
cout << "Number of white roses = " ;
cin >> whiterose;
cout << "Number of tulips = ";
cin >> tulips;

ifPrice(redrose, whiterose, tulips);

}

}


void ifPrice(int redrose,int whiterose, int tulips)

{



float totalamount;
totalamount = (redrose*2.00) + (whiterose*4.10) + (tulips*2.50);
cout << " The original price is = ";
cout << totalamount;


if(totalamount > 200)
{

float discount;
float newamount;
discount = 0.2*totalamount;
newamount = totalamount - discount;

cout << "Price after discount is = ";
cout << newamount;



}


}