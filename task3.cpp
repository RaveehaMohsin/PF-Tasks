#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word = ";
    getline(cin,word);
    int size = word.length();


    if (size%2==0)
    {
        cout << "TRUE";
    }

    else if(size % 2 != 0)
    {
        cout << "FALSE";
    }



}
