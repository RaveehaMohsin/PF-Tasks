#include <iostream>
using namespace std;

main()
{
    cout << "Sum of first 100 natural numbers is = ";

    int num = 0;
    int add;
    for (int count = 1 ;count <= 100; count = count + 1)
    

    {
        add = num + count;
        num = add;
    }

     cout << add;

}