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
        for(int i=1;i<n;i++){
            int j=i-1,x=arr[i];
            while(j>=0 && arr[j]>x){arr[j+1]=arr[j];j--;}
            arr[j+1]=x;
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}