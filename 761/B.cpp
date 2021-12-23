#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a, b ,c;
        c=1;
        n--;
        if(n%2!=0){
            a = (n-1)/2;
            b = (n+1)/2;
        }
        else{
            a = n/2;
            b = n/2;
        }
        while(__gcd(a, b)!=1){
            a--;
            b++;
        } 
        if(a+b==n){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else if(a+b<n){
            cout<<a<<" "<<b+1<<" "<<c<<endl;
        }
        else{
            cout<<a-1<<" "<<b<<" "<<c<<endl;
        }
    }
    return 0;
}