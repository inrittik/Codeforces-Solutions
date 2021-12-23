#include<iostream>
#define ull unsigned long long int
using namespace std;

ull min(ull a, ull b){
    if(a<b) return a;
    else return b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ull A, B, x, y;
        cin>>A>>B>>x>>y;
        cout<<min(A/x, B/y)<<endl;
    }
    return 0;
}