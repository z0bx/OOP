#include <iostream>
using namespace std;
int main()
{
    int n, min, max, m;
    cout<<"n: ";
    cin>>n;
    cout<<"1-r toog oruul: ";
    cin>>m;
    min = m;
    max = m;
    for(int i=1; i<n; i++){
        cout<<i+1<<"-r toog oruul: ";
        cin>>m;
        if(max<m){
            max=m;
        }
        if(min>m){
            min=m;
        }
    }
    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;
    return 0;
}