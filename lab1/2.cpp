#include <iostream>
using namespace std;
int main()
{
    float radius, pi, area;
    pi = (float)355 / (float)113;
    cout << "radius: ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "area: " << area << endl;
    return 0;
}
