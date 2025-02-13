#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    float avg;
    cout<<"n: ";
    cin>>n;
    for (int i=0; i<n+1; i++){
        sum+=i;
    }
    avg = float(sum)/float(n);
    cout<<avg;
    return 0;
}
