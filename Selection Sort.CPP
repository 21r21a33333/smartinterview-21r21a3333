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
        for(int i=n-1;i>0;i--){
            int min=i;
            for(int j=i-1;j>=0;j--){
                if(arr[min]<=arr[j])min=j;
            }
            swap(arr[i],arr[min]);
            cout<<min<<" ";
        }
        cout<<endl;
    }
    return 0;
}