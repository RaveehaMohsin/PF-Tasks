#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word = ";
    getline(cin,word);

    int idx =0;
    while (word[idx]!= 0)
    {
        idx ++ ;
    }
    
    for (int count = idx ; count >= '\0' ; count --)
    {
        cout << word[count] << " ";
    }

}