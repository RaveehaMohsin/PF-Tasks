#include <iostream>
using namespace std;

main()
{
    
    string pin;
    cout << "ENTER YOUR PIN : ";
    cin >> pin;
    
    string MOVES[10]= {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};

    string output;
    bool valid = true;
    for(int idx = 0;idx <4 ;idx ++)
    {  
        
       { int ascii= pin[idx];
        int number =  ascii- 48;
        if(ascii <48 || ascii >57)
        {
           cout << "INVALID PIN.";
            break;
        }

        int pickupMOVE  = number + idx;
        if(pickupMOVE >=10)
        {
            pickupMOVE = pickupMOVE-10;
        }
        output= MOVES[pickupMOVE];

        cout << output << ",";
    }
    }
}

   
