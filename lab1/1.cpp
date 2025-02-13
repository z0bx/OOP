#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "ehnii too: ";
    cin >> a;
    cout << "2doh too: ";
    cin >> b;
    cout << "3dah too: ";
    cin >> c;
    if (a < b)
    {
        if (c < b)
        {
            max = b;
        }
        else
            max = c;
    }
    else if (c < a)
    {
        max = a;
    }
    else
        max = c;
    cout<<"hamgiin ih too: "<<max;
    return 0;
}