#include<iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int j;
    int letters[26] = { 0 };
    for(int i=0; i<n; ++i){
        j = s[i]- 'a';
        letters[j] = 1;
    }
    for(int i=0; i<26; ++i){
        if(letters[i]==1)cout<<char(i+'a');
    }
    return 0;
}