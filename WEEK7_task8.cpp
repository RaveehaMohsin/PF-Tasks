#include <iostream>
using namespace std;

void percentage(int number);
int p1 = 0 , p2 = 0 , p3 = 0 , p4 = 0 , p5 = 0;
main()
{
    int totalnumbers;
    int number;
    cout << "Count of the line of numbers = ";
    cin >> totalnumbers;

    for(int i = 0 ; i< totalnumbers ; i++)
    {
        cin >> number;
        percentage(number);
    }

        cout << (p1 * 100) / totalnumbers << "%" << endl; 
        cout << (p2 * 100) / totalnumbers << "%"<< endl;
        cout << (p3 * 100) / totalnumbers << "%"<< endl;
        cout << (p4 * 100) / totalnumbers << "%"<< endl;
        cout << (p5 * 100) / totalnumbers << "%"<< endl;
}

void percentage(int number)
{
        if(number > 0 && number < 200){
                p1 = p1 + 1;
        } else if(number >= 200 && number <= 399){
               p2 = p2 + 1;
        } else if(number >= 400 && number <= 599){
               p3 = p3 + 1;
        } else if(number >= 600 && number <= 799){
               p4 = p4 + 1;
        } else if(number >= 800 && number <= 1000){
               p5 = p5 + 1;
        }
}