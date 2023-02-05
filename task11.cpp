#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word = ";
    getline (cin,word);
    char letter;
    cout << "Enter a letter = ";
    cin >> letter;

    int idx = 0;
    while(word[idx]!= '\0')
    {
        idx ++ ;
    }


    if(word[idx-1] == letter)
    {
        cout << "THE LAST LETTER IS SAME AS " << letter;
    }

    else
    {
        cout << "THE LAST LETTER IS NOT SAME AS " << letter; 
    }
}