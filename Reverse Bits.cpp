#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        unsigned int a;
        cin>>a;
        unsigned int ans=0u;
        for(int i=0;i<32;i++){
            if((a & (1u<<i)))ans|=(1u << (31-i));
        }  
        cout<<ans<<endl;
    }
    return 0;
}