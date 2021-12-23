#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, m, i, j;
        cin>>n>>m>>i>>j;
        long long x1, y1, x2, y2;
        if(j<=m/2)x1=m;
        else x1=1;
        if(i<=n/2)y1=n;
        else y1=1;

        if(j<=m/2)x2=1;
        else x2=m;
        if(i<=n/2)y2=1;
        else y2=n;
        

        cout<<y1<<" "<<x1<<" "<<y2<<" "<<x2<<endl;
    }
    return 0;
}