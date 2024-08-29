#include <iostream>
using namespace std;

main()

{
    string word;
    cout << "Enter a word = ";
    getline(cin,word);

    int idx=0;
    
    while (word[idx] !=0)
    {
        idx ++;
    }
        if(idx % 2 == 0)
        {

            cout << "WORD IS EVEN.";

        }

        else
        {
             cout << "WORD IS ODD.";

        }

    
}