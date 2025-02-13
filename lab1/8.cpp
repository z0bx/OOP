#include <iostream>
using namespace std;
int main()
{
    float a[10], s=0;
    for(int i=0; i<10; i++){
        cout<<i+1<<"-r element: ";
        cin>>a[i];
        s+=a[i];
    }
    cout<<"dundaj: "<<s/10<<endl;
    return 0;
}