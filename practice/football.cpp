#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin>>str;

    int sum = 1;
    int i = 1;
    int n = str.length();

    if(n<7){
        cout<<"NO"<<endl;
    }
    else{
        while(sum<7 && i<n){
            if(str[i]==str[i-1]) sum++;
            else sum=1;
            i++;
        }
        if(sum==7){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
