#include <iostream>
using namespace std;

main()


{

string name;
float subj1;
float subj2;
float subj3;
float subj4;
float subj5;
float aggregate;


cout << "Enter your name : ";
cin >> name;
cout << "Enter subject 1 marks = ";
cin >> subj1;
cout << "Enter subject 2 marks = ";
cin >> subj2;
cout << "Enter subject 3 marks = ";
cin >> subj3;
cout << "Enter subject 4 marks = ";
cin >> subj4;
cout << "Enter subject 5 marks = ";
cin >> subj5;

aggregate = ((subj1+subj2+subj3+subj4+subj5)/500)*(100);

cout << "Your aggregate = ";
cout << aggregate;

}

