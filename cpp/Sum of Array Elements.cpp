#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        long long int sum=0;
        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            sum+=x;
        }
        cout<<sum<<endl;

    }
    return 0;
}