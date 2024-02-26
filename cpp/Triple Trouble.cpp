#include <bits/stdc++.h>
using namespace std;
bool issetbit(int a ,int k){return a>>k&1;}
int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long int ans=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int j=0;j<31;j++){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(issetbit(arr[i],j))cnt++;
            }
            if(cnt%3!=0)ans+=(1<<j); 
        }
        cout<<ans<<endl;
    }   
    return 0;
}