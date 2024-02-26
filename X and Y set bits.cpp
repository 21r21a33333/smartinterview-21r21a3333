#include <bits/stdc++.h>
using namespace std;
long long int M=1000000007;
long long int binexp(long long int a,long long int b){
    long long int res=1;
    while(b){
        if(b&1){
            res=(res * a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==y)cout<<binexp(2,x)<<endl;
        else cout<<(binexp(2,x)+binexp(2,y))%M<<endl;
    }   
    return 0;
}