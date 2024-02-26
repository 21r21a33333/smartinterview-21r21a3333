#include <bits/stdc++.h>
using namespace std;
int cnt=INT_MAX;
vector<vector<int>>perfect;
bool valid(vector<int>&ans){
    int row[3]={0},col[3]={0},dia1=0,dia2=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int k=ans[i*3+j];
            if(i==j)dia1+=k;
            if(j==2-i)dia2+=k;
            row[i]+=k;
            col[j]+=k;
        }
    }
    if(dia1%5 !=0 || dia2%5 !=0)return false;
    for(int i=0;i<3;i++){
        if(row[i]%5!=0 || col[i]%5 !=0)return false;
    }
    return true;
} 
int help(vector<int>&ans,vector<int>&given){
    int ret=0;
    for(int i=0;i<9;i++){
        ret+=abs(ans[i]-given[i]);
    }
    return ret;
}
void func(vector<int> &given,vector<int> &ans,int ind,vector<bool> &check){
    if(ind==9){
        if(valid(ans)){
            perfect.push_back(ans);
            cnt=min(cnt,help(ans,given));
        }
    }
    for(int i=1;i<=9;i++){
        if(check[i-1])continue;
        check[i-1]=true;
        ans[ind]=i;
        func(given,ans,ind+1,check);
        check[i-1]=false;
    }
}
int main() {
    int t;
    cin>>t;
    t--;
    vector<int>given(9);
    for(int i=0;i<9;i++)cin>>given[i];
    vector<bool>check(9,false);
    vector<int>ans(9);
    int ind=0;
    cnt=INT_MAX;
    func(given,ans,ind,check);
    cout<<cnt<<"\n";
    while(t--){
        vector<int>giv(9);
        for(int i=0;i<9;i++)cin>>giv[i];
        cnt=INT_MAX;
        for(auto it:perfect){
            cnt=min(cnt,help(it,giv));
        }
        cout<<cnt<<"\n";
    }   
    return 0;
}