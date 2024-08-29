#include <iostream>
using namespace std;

float totalIncome(string screening,int rows,int columns);

main()
{
    int rows;
    int columns;
    string screening;
    float final;

    cout << "Enter the number of rows = ";
    cin >> rows;
    cout << "Enter the number of columns = ";
    cin >> columns;
    cout << "Enter the type of screening = ";
    cin >> screening;

    final= totalIncome(screening,rows,columns);
    cout << final;
}


float totalIncome(string screening,int rows,int columns)
{  
    float finalamount;
    if (screening == "premiere")
    {
    finalamount = rows*columns*12.00;
    }

    else if(screening == "normal")
    {
        finalamount = rows*columns*7.5;
    }

    else if(screening == "discount")
    {
        finalamount = rows*columns*5.00;
    }

    else
    {
        finalamount = 0;
    }

    return finalamount;
}