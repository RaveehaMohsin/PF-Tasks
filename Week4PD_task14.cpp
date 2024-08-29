#include <iostream>
using namespace std;


void printMenu();
void calculateAggregate( string name, float matricMarks, float interMarks,float ecatMarks);
void compareMarks( string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);


main()

{

printMenu();

string name;
float matricMarks;
float interMarks;
float ecatMarks;
cout << "Enter your name : ";
cin >> name;
cout << "Enter your matric marks : ";
cin >> matricMarks;
cout << "Enter your inter marks : ";
cin >> interMarks;
cout << "Enter your ecat marks : ";
cin >> ecatMarks;

calculateAggregate(name, matricMarks, interMarks, ecatMarks);



string nameStd1;
int ecatMarksStd1;
string nameStd2;
int ecatMarksStd2;

cout << "Enter name of student 1 : ";
cin >>  nameStd1;
cout << "Enter ecat marks of std 1 : ";
cin >> ecatMarksStd1;
cout << "Enter name of student 2 : ";
cin >> nameStd2; 
cout << "Enter ecat marks of std 2 : ";
cin >> ecatMarksStd2;

compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);


}



void printMenu()

{



cout << "    *************************************************************************** " << endl;
cout << "    *                  University of Engineering and Technology               * " <<endl;
cout << "    *************************************************************************** " <<endl;


}

void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)

{


float matricresult;
matricresult = (matricMarks/1100)*30;
float interresult;
interresult = (interMarks/550)*30;
float ecatresult;
ecatresult = (ecatMarks/400)*40;

float aggregate;
aggregate = matricresult + interresult + ecatresult;

cout << "Your aggregate is ";
cout << aggregate;

}



void compareMarks( string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)

{

if(ecatMarksStd1 > ecatMarksStd2)
{ cout << nameStd1;
 cout << "This student has greater marks.";
}

if(ecatMarksStd1 < ecatMarksStd2)
{ cout << nameStd2;
 cout << "This student has greater marks.";
}


}





