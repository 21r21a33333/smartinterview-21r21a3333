#include <bits/stdc++.h>
using namespace std;
void f(int n,char s,char d,char t){
    if(n==0)return ;
    f(n-1,s,t,d);
    cout<<"Move "<<n<<" "<<"from "<<s<<" to "<<d <<endl;
    f(n-1,t,d,s);
}
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    f(n,'A','C','B');
    }
}