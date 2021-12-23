#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b){
    if(a>=b) return a;
    else return b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> a;
        int n, num;
        cin>>n;
        for(int i=0; i<n; ++i){
            cin>>num;
            a.push(num);
        }
        int l=max(a[0], a[a.size()-1]);
        if(a==a[0])
    }
    return 0;
}