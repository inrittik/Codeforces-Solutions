#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n, m, p;
    while(t--){
        n=0, m=0, p=0;
        long long num;
        cin>>num;
        while(num>1 && (num%2==0 || num%3==0)){
            if(num%3==0){
                n++;
                num=num/3;
            }
            else if(num%2==0){
                p++;
                num=num/2;
            }
        }
        if(num>1){
            cout<<-1<<endl;
        }
        else if(num==1){
            m=n-p;
            if(n>=0 && m>=0) cout<<m+n<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}