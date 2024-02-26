#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        unsigned int a ,b;
        cin>>a>>b;
        vector<int>arr,brr;
        for(int i=0;i<32;i++){
            if( (1<<i) & a ) arr.push_back(1);
            else arr.push_back(0);
        }
        for(int i=0;i<32;i++){
            if( (1<<i) & b ) brr.push_back(1);
            else brr.push_back(0);
        }
        int cnt=0;
        for(int i=0;i<32;i++){
            if(arr[i]!=brr[i])cnt++;
        }
        cout<<cnt<<endl;
    } 
    return 0;
}