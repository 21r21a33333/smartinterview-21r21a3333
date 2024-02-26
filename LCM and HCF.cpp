#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int gd=__gcd(a,b);
        long long int lm=(a*b)/gd;
        cout<<lm<<" "<<gd<<endl;
    }   
    return 0;
}