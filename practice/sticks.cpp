#include<iostream>
using namespace std;

int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int max(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int n, m;
    cin>>n>>m;
    int s_num = min(n, m);
    int b_num = max(n, m);
    if((s_num%2!=0 && b_num>=s_num)) cout<<"Akshat"<<endl;
    else if(s_num%2==0 && b_num>=s_num) cout<<"Malvika"<<endl; 
    return 0;
}