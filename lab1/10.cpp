#include <iostream>
using namespace std;
int main()
{
    int n, s=0;
    cout<<"n: ";
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            s++;
        }
    }
    if(s==0 || n==2){
        cout<<"anhny too mun"<<endl;
    }
    else{
        cout<<"anhny too bish"<<endl;
    }
}