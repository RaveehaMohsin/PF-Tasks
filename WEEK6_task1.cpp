#include<iostream>
using namespace std;

char calculateGrade(int marks);

main()
{
    int marks;
    char grade;
    cout << "ENTER YOUR MARKS = ";
    cin >> marks;
    grade = calculateGrade(marks);
    cout << grade;

}

char calculateGrade(int marks)
{   
    if(marks < 50)
    { return 'F'; }

    else if (marks >= 50 && marks <= 60)
    { return 'E';}

    else if (marks >= 61 && marks <= 70)
    { return 'D';}

    else if (marks >=71 && marks <=80)
    { return 'C';}

    else if(marks>=81 && marks<= 85)
    { return 'B';}
   
   else if (marks>85)
   { return 'A';}


}