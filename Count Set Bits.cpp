#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        cin>>n;
        int cnt=0;
        while(n>0){cnt++;n&=n-1;}
        cout<<cnt<<endl;
    }   
    return 0;
}