#include<iostream>
#include <algorithm>
using namespace std;

bool isSorted(int* arr, int n){
    for(int i=1; i<n+1; ++i){
        if(arr[i]!=i) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int temp, p;
        int count=0;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; ++i){
            cin>>arr[i];
        }
        if(isSorted(arr, n)) cout<<0<<endl;
        else if(arr[1]==1 || arr[n]==n){
            cout<<1<<endl;
        }
        else if(arr[n]==1 && arr[1]==n){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}