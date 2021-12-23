#include<iostream>
using namespace std;


long long min(long long a, long long b){
    if(a<b) return a;
    else return b;
}
int main(){
    int q;
    cin>>q;
    while(q--){
        long long a, b, n, S;
        cin>>a>>b>>n>>S;
        long long x;
        
        x=min(S/n, a);
        x = S-x*n;

        if(x<=b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}