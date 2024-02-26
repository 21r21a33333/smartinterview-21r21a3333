#include <bits/stdc++.h>
using namespace std;
long long int M=1000000007;
long long binexp(long long a, long long b)
{
    long long result = 1ll;
    while (b) {
        if (b & 1)
            result = (result * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return result;
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
    int x,y;
    cin>>x>>y;
    long long int left=binexp(2,x);
    left=(left%M -1 + M )%M;
    left=(left%M)*(binexp(2,y))%M;
    cout<<left<<endl;
      
    }
    return 0;
}