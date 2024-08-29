#include <iostream>
using namespace std;

main()
{
    string word;
    cout << "Enter a word = ";
    getline(cin,word);

    int idx= 0;
    int count = 0;
    
    while(word[idx]!= '\0')
    {
       
    if(word[idx]=='a' ||word[idx]=='e' ||word[idx]=='i' ||word[idx]=='o' ||word[idx]=='u')
    {
        count ++;
    }

    idx++;
     
    }

    cout << count;

}