#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    
    int n;
    long long x;
    cin>>n>>x;
    long long arr[n];
    int l, r, p=0;
    for(int i; i<n; ++i) cin>>arr[i];
    sort(arr, arr+n);
    for(int i=0; i<n-2; ++i){
        l=i+1;
        r=n-1;
        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == x) {
                cout<<"YES"<<endl;
                p=1;
                break;
            }
            else if (arr[i] + arr[l] + arr[r] < x)
                l++;
            else
                r--;
        }
    }
    if(p==0)cout<<"NO"<<endl;
}