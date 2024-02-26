#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;int cnt=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x)cnt++;
            else cout<<"0 ";
        }
        for(int i=0;i<cnt;i++)cout<<"1 ";
        cout<<endl;
    }   
    return 0;
}