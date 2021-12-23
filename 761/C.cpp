#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> arr;
        for(int i=0; i<n; ++i){
            ll num;
            cin>>num;
            arr.push_back(num);
        }
        sort(arr.begin(),arr.end());
        vector<ll> perm;
        for(int i=1; i<=n; ++i){
            perm.push_back(i);
        }
        int count=0;
        for(int i=0; i<n; ++i){
            if(perm[i+1]<arr[i]/2 && arr[i]>n){
                cout<<-1<<endl;
                break;
            }
            else if(arr[i]>n){
                arr[i]=perm[i+1];
                count++;
            }
            if(i==n-1){
                cout<<count<<endl;
            }
        }
    }
    return 0;
}