#include<iostream>
using namespace std;
  
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long p;
        int num=0;
        long long q;
        if(n%2==0)cout<<0<<endl;
        else{
            while(n>0){
                q=n%10;
                p=n;
                n/=10;
                if(q%2==0)num++;
            }
            if(p%2==0)cout<<1<<endl;
            else if(num==0)cout<<-1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}