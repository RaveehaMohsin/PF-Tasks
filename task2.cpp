#include <iostream>
using namespace std;

float totalmarks(float m1,float m2,float m3,float m4,float m5);
string name(string student);
float percentage(float m1,float m2,float m3,float m4,float m5);
string grading(float total1);

main()
{
    string student;
    float m1;
    float m2;
    float m3;
    float m4;
    float m5;
    string identity;
    float result1;
    float result2;
    string grade;
    string result3;

    cout << "Enter your name ";
    cin >> student;

    
    cout << "Enter your marks in Maths = ";
    cin >> m1;
    cout << "Enter your marks in English= ";
    cin >> m2;
    cout << "Enter your marks in Chemistry = ";
    cin >> m3;
    cout << "Enter your marks in Biology= ";
    cin >> m4;
    cout << "Enter your marks in Social Science = ";
    cin>> m5;

     identity= name(student);
     cout << identity << endl;

     result1= totalmarks( m1, m2, m3, m4, m5);
     cout << "Total marks are = " << result1 << endl;

     result2 = percentage( m1, m2, m3, m4,m5);
     cout << "Your percentage is = " << result2 << endl;

     result3 = grading(result2);
     cout << "Your grade is = " << result3 << endl;

  
}

string name(string student)
{
    return student;

}


float totalmarks(float m1,float m2,float m3,float m4,float m5)
{
    float total;
    total = m1+ m2+ m3 + m4 + m5;
    return total;
}

float percentage(float m1,float m2,float m3,float m4,float m5)
{
   
   float total1;
   total1= ((m1+m2+m3+m4+m5)/500)*100.0;
   return total1;
}

string grading(float total1)
{
   
    
    if(total1>= 90 && total1 <= 100)
    {
       return "A+";
        
    }

    if(total1>= 80 && total1 <= 90)
    {
        return "A";
    }



    if(total1>= 70 && total1 <= 80)
    {
      return "B+";
    }

    if(total1>= 60 && total1 <= 70)
    {
        return "B";
    }

    if(total1>= 50 && total1 <= 60)
    {
        return "C";
    }

    if(total1>= 40 && total1 <= 50)
    {
        return "D";
    }

    if(total1 < 40)
    {
        return "F";
    }

    return "abc";








}



