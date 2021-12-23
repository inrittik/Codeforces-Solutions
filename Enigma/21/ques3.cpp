#include<iostream>
using namespace std;

int main(){
    int num, sp;
    cin>>num;
 
    int left, right;
    left = 1;
    right = num * num + 1;
    for (int i = num; i > 0; i--) {
        for (sp = num; sp > i; sp--)
            cout<< " ";
 
        for (int j = 1; j <= i; j++) {
            cout<< left<<" ";
            left++;
        }
        for (int j = 1; j <= i; j++) {
            cout<< right;
            if (j < i)
                cout<<" ";
            right++;
        }
        right = right - (i - 1) * 2 - 1;
        cout<< endl;
    }
    return 0;
}