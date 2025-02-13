#include <iostream>
using namespace std;
int main()
{
    int a[10], c=0;
    for(int i=0; i<10; i++){
        cout<<i+1<<"-r element: ";
        cin>>a[i];
        if(a[i]%2==0){
            c++;
        }
    }
    cout<<"tegsh elementuudiin too: "<<c<<endl;
    return 0;
}