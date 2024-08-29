#include <iostream>
using namespace std;

main()

{

int pounds;
int costOfBag;
int area;
int conversion1;
int conversion2;



cout << "Size of fertilizer bag in pounds = ";
cin >> pounds;
cout << "Enter cost of the bag = ";
cin >> costOfBag;
cout << "Area covered by each bag in square feet = ";
cin >> area;

conversion1 = costOfBag/pounds;
conversion2 =costOfBag/area;


cout << "Cost of fertilizer per pound = ";
cout << conversion1;
cout << endl;
cout << "Cost of fertilizing the area per square feet = ";
cout << conversion2;


}
 


