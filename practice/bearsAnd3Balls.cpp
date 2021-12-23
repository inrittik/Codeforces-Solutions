#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int count=1;
    for(int i=0; i<n; ++i){
        if(arr[i]+1==arr[i+1]){
            count++;
        }
        else if(arr[i]!=arr[i+1]){
            count=1;
        }
        if(count==3){
            break;
        }
    }
    if(count==3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}