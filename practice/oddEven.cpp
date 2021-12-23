#include<iostream>
using namespace std;

int main(){
    long long n,  k, half;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n/2){
            cout<<2*k-1<<endl;
        }
        else if(k<n){
            half = n/2;
            cout<<(2*(k%half))<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    else{
        if(k<=(n+1)/2){
            cout<<2*k-1<<endl;
        }
        else{
            half = (n+1)/2;
            cout<<(2*(k%half))<<endl;
        }
    }
    return 0;
}