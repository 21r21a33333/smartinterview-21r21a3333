#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,ans=0ll;
        cin>>a;
        for(int i=0;i<32;i+=2){
            long long int first=(a & (1ll<<i))?1:0,second=(a & (1ll<<(i+1)))?1:0;
            ans|=((first<<(i+1)));
            ans|=((second<<(i)));
        }
        cout<<ans<<endl;
    }
    return 0;
}