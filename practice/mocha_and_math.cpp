#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long min;
        long long arr[n];
        for(int i=0; i<n; ++i){
            cin>>arr[i];
        }
        min = arr[0];
        for (int i=0; i<n; ++i){
            if(arr[i]<min) min=arr[i];
        }
        for(int i=0; i<n; ++i){
            if((arr[i]&min)<min) min = arr[i]&min;
        }
        cout<<min<<endl;
    }
    return 0;
}