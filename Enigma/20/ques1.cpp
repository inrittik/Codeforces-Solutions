// Name: Nrittik Sarmah
// Scholar Id: 2012032

#include<iostream>
#define ull unsigned long long int
using namespace std;

int main(){
    ull t;
    cin>>t;
    while(t--){
        ull n;
        cin>>n;
        if(n<2)cout<<"NO"<<endl;
        else if((n & (n-1))==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}