#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int asdf=1;
    while(t--){
        cout<<"Case #"<<asdf++<<":"<<endl;
        int n;
        cin>>n;
        int start=n/2-1,middle=1;
        for(int i=0;i<n/2;i++)cout<<" ";
        cout<<"*"<<endl;
        for(int i=1;i<=n/2;i++){
            for(int j=0;j<start;j++)cout<<" ";
            cout<<"*";
            for(int j=0;j<middle;j++)cout<<" ";
            cout<<"*"<<endl;
            start--;middle+=2;
        }
        start=1,middle-=4;
        for(int i=1;i<n/2;i++){
            for(int j=0;j<start;j++)cout<<" ";
            cout<<"*";
            for(int j=0;j<middle;j++)cout<<" ";
            cout<<"*"<<endl;
            start++;middle-=2;
        }
        for(int i=0;i<n/2;i++)cout<<" ";
        cout<<"*"<<endl;

        
    }   
    return 0;
}