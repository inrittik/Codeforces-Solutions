#include<iostream>
#include <vector>
using namespace std;
#define N 1e6 + 1;
vector<long long> arr[N+1];
vector<long long> primes;

void sieve(long long n){
    for(long long i=2; i<n; ++i){
        if(arr[i]==0){
            for(long long j=i*i; j<=n; j+=i){
                arr[j]=1;
            }
        }
    }
    for(long long i=2; i<n; ++i){
        if(arr[i]==0){
            primes.push_back(i);
        }
    }
}

int main(){
    long long t;
    cin>>t;
    sieve(N);
    vector<long long> powerOfTwo(32);
    long long x = 1;
    for (int i = 0; i < 32; i++){
        powerOfTwo[i] = x;
        x *= 2;
    }

    while(t--){
        long long n, count;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }

    }
    return 0;
}