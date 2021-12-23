#include<iostream>
#define ull long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ull n, k;
        cin>>n>>k;
        ull arr[n];
        for(ull i=0; i<n-1; ++i)cin>>arr[i];
        ull res=0;
        for(ull i=0; i<n-1; ++i) res^=arr[i];
        res^=k;
        cout<<res<<endl;
    }
    
}