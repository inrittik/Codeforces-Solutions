#include<iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    reverse(s.begin(), s.end());
    if(s==t){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}