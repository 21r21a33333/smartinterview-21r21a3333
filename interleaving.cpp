#include <bits/stdc++.h>
using namespace std;

void func(int i,int j,string &str1,string &str2,string ds){
    if(i==str1.length() && j==str2.length()){
        cout<<ds<<endl;
    }
    else if(j==str2.length()){
        cout<<ds;
        for(int x=i;x<str1.length();x++)cout<<str1[x];
        cout<<endl;
    }
    else if(i==str1.length()){
        cout<<ds;
        for(int x=j;x<str2.length();x++)cout<<str2[x];
        cout<<endl;
    }
    else if(str1[i]<str2[j]){
        func(i+1,j,str1,str2,ds+str1[i]);
        func(i,j+1,str1,str2,ds+str2[j]);
    }
    else{
        func(i,j+1,str1,str2,ds+str2[j]);
        func(i+1,j,str1,str2,ds+str1[i]);
    }
    
}
int main() {
    int t;
    cin>>t;
    int asdf=1;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        cout<<"Case #"<<asdf<<":"<<endl;
        func(0,0,str1,str2,"");
        asdf++;
    }
    return 0;
}