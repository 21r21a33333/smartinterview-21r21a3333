#include <bits/stdc++.h>
using namespace std;
void func(string ds,int open,int close){
    if(open==0 && close==0){
        cout<<ds<<endl;
        return;
    }
    if(open>0)func(ds+"{",open-1,close+1);
    if(close>0)func(ds+"}",open,close-1);
}
int main() {
    int t;
    cin>>t;
    int asdf=1;
    while(t--){
        int n;
        cin>>n;
        cout<<"Test Case #"<<asdf++<<":"<<endl;
        func("",n,0);
    } 
    return 0;
}