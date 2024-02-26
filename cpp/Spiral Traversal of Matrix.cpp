#include<bits/stdc++.h>
using namespace std;
int main(){
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
        int top=0,bottom=n-1,left=0,right=n-1;
        while(true){
            for(int i=left;i<=right;i++)cout<<arr[top][i]<<" ";
            top++;
            if(top>bottom || left>right)break;
            for(int i=top;i<=bottom;i++)cout<<arr[i][right]<< " " ;
            right--;
            if(top>bottom || left>right)break;
            for(int i=right;i>=left;i--)cout<<arr[bottom][i]<<" ";
            bottom--;
            if(top>bottom || left>right)break;
            for(int i=bottom;i>=top;i--)cout<<arr[i][left]<<" ";
            left++;
            if(top>bottom || left>right)break;
        }
        cout<<endl;
    }
}