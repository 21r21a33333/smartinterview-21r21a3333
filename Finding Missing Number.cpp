#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int xo=0;
        for(int i=1;i<=n+1;i++)xo^=i;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            xo^=x;
        }
        cout<<xo<<endl;
    }
    return 0;
}