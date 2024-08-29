#include <iostream>
using namespace std;


void discounts(string countryname, int ticketprice);
 
main()

{

string countryname;
int ticketprice;
while(true){
cout << endl;
cout << "Enter the country name : ";
cin >> countryname;
cout << "Enter ticket price : ";
cin >> ticketprice;
discounts(countryname,ticketprice);
}



}


void discounts(string countryname,int ticketprice)

{


if(countryname == "pakistan")

{

float discount;
float newamount;

discount = (0.05 * ticketprice);
newamount = ticketprice - discount;


cout << "Your ticket price after discount is = ";
cout << newamount;

}


if( countryname == "ireland")

{


float discount;
float newamount;

discount = (0.1 * ticketprice);
newamount = ticketprice - discount;

cout << "Your ticket price after discount is = ";
cout << newamount;

}


if( countryname == "india")

{

float discount;
float newamount;

discount = (0.2 * ticketprice);
newamount = ticketprice - discount;


cout << "Your ticket price after discount is = ";
cout << newamount;

}

 

if( countryname == "england")

{

float discount;
float newamount;
discount =  (0.3 * ticketprice);
newamount = ticketprice - discount;



cout << "Your ticket price after discount is = ";
cout << newamount;

}



if( countryname == "canada")

{

float discount;
float newamount;
discount =  (0.45 * ticketprice);
newamount = ticketprice - discount;

cout << "Your ticket price after discount is = ";
cout << newamount;

}

}
 
 
 
 
 