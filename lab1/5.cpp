#include <iostream>
using namespace std;
int main()
{
    int urjver = 1, niilber = 0, n, m;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        urjver*=m;
        niilber+=m;
    }
    cout<<urjver<<endl;
    cout<<niilber<<endl;
    return 0;
}
