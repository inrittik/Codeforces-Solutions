#include<iostream>
using namespace std;

long long min(long long a, long long b){
    if(a<b) return a;
    else return b;
}
long long max(long long a, long long b){
    if(a>b) return a;
    else return b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        long long grp=0;
        long long sum;
        long long p, m;
        long long i, j;
        i=1;
        p=min(a, b);
        m=max(a, b);
        while(p>0 && m>0){
            sum=0;
            j=0;
            p-=i;
            sum+=i;
            j=4-sum;
            if(m>=j){
                m-=j;
                grp++;
                i++;
            }
            else break;
            
        }
        cout<<grp<<endl;
    }
    return 0;
}