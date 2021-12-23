#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        if((n & n-1)==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}