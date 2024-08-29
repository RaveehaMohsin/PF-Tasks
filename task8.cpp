#include <iostream>
using namespace std;

void totalAmount(string day,int amount);

main()

{

string day;
int amount;

while (true){
cout << "Enter a day: ";
cin >> day;
cout << "Enter an amount: ";
cin >> amount;

totalAmount(day,amount);
}

}

void totalAmount(string day,int amount)

{


if (day == "sunday"){


float discount;
float bill;
discount = 0.1*amount;
bill = amount - discount;
cout << "Your bill is =  ";
cout << bill; 






}


if (day != "sunday"){


float discount;
float bill;
discount = 0.05*amount;
bill = amount - discount;

cout << "Your bill is = ";
cout << bill;




}









}
