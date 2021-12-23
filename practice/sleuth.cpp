#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string ques;
    getline(cin, ques);
    int n = ques.size();
    string s;
    int k=0;
    for(int i=0; i<n; ++i){
        if(ques[i]!=' ') s[k++]=ques[i];
        else if(ques[i]=='?'){
            s[k]=ques[i];
            break;
        }
    }
    int l = s.size();
    if(s[l-2]=='a' || s[l-2]=='e' || s[l-2]=='i' || s[l-2]=='o' || s[l-2]=='u') cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}