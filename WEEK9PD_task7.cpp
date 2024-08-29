#include <iostream>
using namespace std;
main()
{
    string word1;
    string word2;
    cout << "Enter the first string : ";
    getline(cin,word1);
    cout << "Enter the second string : ";
    getline(cin,word2);
    int length1 = word1.length();
    int length2 = word2.length();

     int count =0;
    for(int idx = 0;idx<length1;idx++)
    {
       char element = word1[idx];
       for(int idx = 0;idx<length2;idx++)
       {
        if(element==word2[idx])
        {
            count ++;
            word2[idx]= '}';
            break;
        }
        
       }

    }

    cout << "Common Characters are : " << count;

}