#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n],freq[k]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[(arr[i]%k)]++;
        }
        if(k%2==0)freq[k/2]=min(1,freq[k/2]);
        long long int ans=0ll;
        for(int i=1;i<=k/2;i++){
            ans+=max(freq[i],freq[k-i]);
        }
        ans+=min(1,freq[0]);
        cout<<ans<<endl;
    }   
    return 0;
}