#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        long long int sum=0ll;
        for(int i=0;i<31;i++){
            long long int cnt=0;
            for(int j=0;j<n;j++){
                if((arr[j]>>i) & 1)cnt++;
            }
            sum+=(cnt*(n-cnt)*(1<<i));
        }
        cout<<2*sum<<endl;    
    }   
    return 0;
}