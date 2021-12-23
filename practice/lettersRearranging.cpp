#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string s){
    int i=0;
    int n = s.size();
    // cout<<n<<endl;
    while(i <= n-i ){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i;
        int n = s.size();
        char temp=' ';
        // cout<<isPalindrome(s)<<endl;
        if(isPalindrome(s)){
            for(i=0; i<n/2; ++i){
                if(s[i]!=s[i+1]){
                    temp = s[i+1];
                    s[i+1] = s[i];
                    s[i] = temp;
                    break;
                }
            }
            if(temp==' '){
                cout<<-1<<endl;
                continue;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}