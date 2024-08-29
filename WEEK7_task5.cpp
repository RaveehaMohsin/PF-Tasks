#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter a number = ";
    cin >> num;

    for (int count = 0;count <= 10;count = count + 1)
    {
        int answer = num*count;
        cout << num << " * " << count << "=" << answer << endl;
    }
}