#include<iostream>
using namespace std;

int main(){
    int t;
    long long p, m;
    cin>>t;
    while(t--){
        m=0, p=0;
        long long num;
        cin>>num;
        p = num/2020;
        m = num%2020;
        if(m<=p) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}