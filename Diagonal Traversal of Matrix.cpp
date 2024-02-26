#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        for(int j=n-1;j>=0;j--){
            int k=0,l=j,sum=0;
            while(k<=n-1 && l<=n-1){sum+=arr[k++][l++];}
            cout<<sum<<" ";
        }
        for(int i=1;i<n;i++){
            int k=i,l=0,sum=0;
            while(k<=n-1 && l<=n-1){sum+=arr[k++][l++];}
            cout<<sum<<" ";
        }
        cout<<endl;
    }   
    return 0;
}