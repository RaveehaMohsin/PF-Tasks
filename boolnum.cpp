#include <iostream>
using namespace std;

bool equalNum(int n1,int n2, int n3);

main()
{
    int n1;
    int n2;
    int n3;
    bool result;

    cout << "ENTER YOUR NUMBER = ";
    cin >> n1;
    cout << "ENTER YOUR NUMBER = ";
    cin >> n2;
    cout << "ENTER YOUR NUMBER = ";
    cin >> n3;
    result = equalNum(n1,n2, n3);
    cout << result;


}

bool equalNum(int n1,int n2, int n3)

{
    if ((n1==n2) && (n2 == n3) && (n1 == n3))
    {
        return true;
    }

    else
    {
        return false;
    }

    return 0;
}

