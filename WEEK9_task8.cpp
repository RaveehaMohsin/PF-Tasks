#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word : ";
    getline(cin,word);

    int idx=0;
    
    while (word[idx] !=0)
    {
        cout << "The character at index " << idx << "is " << word[idx];
        cout << endl;
        idx++;
    }


}