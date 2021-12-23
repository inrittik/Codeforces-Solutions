#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, p;
        cin>>n>>k;
        long long arr[n*k+1];
        long long sum=0;
        for(int i=1; i<=n*k; ++i){
            cin>>arr[i];
        }
        p=n/2;
        for(int i=n*k-p; i>0; i=i-p-1){
            if(k>0){
                sum+=arr[i];
                k--;    
            }
            else break;
        }
        cout<<sum<<endl;
    }
    return 0;
}