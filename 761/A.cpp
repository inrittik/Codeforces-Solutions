#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string S, T;
        cin>>S>>T;
        int n = S.size();
        sort(S.begin(), S.end());
        int alp[26] = {0};
        for(int i=0; i<n; ++i){
            int p = S[i]%'a';
            alp[p] += 1;
        }

        if(T=="abc" && S[0]=='a'){
            int p = alp[0];
            while(p){
                cout<<'a';
                p--;
            }
            p = alp[2];
            while(p){
                cout<<'c';
                p--;
            }
            p = alp[1];
            while(p){
                cout<<'b';
                p--;
            }
            for(int i=3; i<26; ++i){
                p = alp[i];
                while(p){
                    cout<<char(i+'a');
                    p--;
                }
            }
        }

        else{
            for(int i=0; i<26; ++i){
                int p = alp[i];
                while(p){
                    cout<<char(i+'a');
                    p--;
                }
            }
        }
        cout<<endl;
        
    }
    return 0;
}