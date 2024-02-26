#include <bits/stdc++.h>
using namespace std;
bool isset(int a,int k){return a>>k&1;}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],ans=0;
        for(int i=0;i<n;i++){cin>>arr[i];ans^=arr[i];}
        for(int i=1;i<=n-2;i++)ans^=i;
        int k;
        for(int i=0;i<31;i++){
            if(isset(ans,i)){
                k=i;break;
            }
        }
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(isset(arr[i],k))a^=arr[i];
            else b^=arr[i];
        }
        for(int i=1;i<=n-2;i++){
            if(isset(i,k))a^=i;
            else b^=i;
        }
        cout<<min(a,b)<<" "<<max(a,b)<<endl;

    }   
    return 0;
}