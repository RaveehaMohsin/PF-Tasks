#include <iostream>
using namespace std;
main()

{

string movie;
int adultTP;
int childTP;
int adultTS;
int childTS;
float charity;
float total_amount;
float remaining_amount;
float charity_perc;



cout << "Enter movie name : ";
cin >> movie;
cout << "Enter adult ticket price : ";
cin >> adultTP;
cout << "Enter child ticket price : ";
cin >> childTP;
cout << "Enter number of adult tickets sold : ";
cin >> adultTS;
cout << "Enter number of child tickets sold : ";
cin >> childTS;
cout << "Percentage of the amount to be donated to the charity : ";
cin >> charity;



total_amount = (adultTP*adultTS) + (childTP*childTS);


cout << "Total amount generated = ";
cout << total_amount;
cout << endl;

charity_perc = total_amount*(charity/100);


remaining_amount = (total_amount - charity_perc);

cout << "Remaining amount = ";
cout << remaining_amount;

}
