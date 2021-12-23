#include<iostream>
#include <string.h>
using namespace std;

int max(int a, int b){
    if(a>=b) return a;
    else return b;
}
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int main(){
    string s, t;
    cin>>s>>t;
    // cout<<s<<t;
    int n1 = s.size();
    int n2 = t.size();
    // cout<<n1<< ' '<<n2<<endl;
    int l = max(n1, n2);
    // cout<<l;
    int k =0;
    for(int i = 1; i<=l; ++i){
        if(s[n1-1]!=t[n2-1]){
            cout<<n1+n2<<endl;
            break;
        }
        else if(s[n1-i]!=t[n2-i]){
            cout<<n1+n2-2*k<<endl;
            break;
        } 
        else if(s[n1-1]==t[n2-1]){
            k++;
        }
        if(min(n1, n2)-i==0){
            cout<<l-i<<endl;
            break;
        }
    }
    return 0;
}