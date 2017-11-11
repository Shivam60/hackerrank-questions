#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b){
    if(a==b) return a;
    if(a==0 || b==0) return 0;
    if(a>b) return gcd(a-b,b);
    if(a<b) return gcd(a,b-a);
    else return -1;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a,b;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        a.push_back(t);
    }
    for(int i=0;i<m;++i){
        int t;
        cin>>t;
        b.push_back(t);
    }
    int ansg=b[0];
    for(int i=1;i<b.size();++i){
        ansg=gcd(b[i],ansg);
    }
    int ansl=a[0];
    for(int i=1;i<a.size();++i){
        if(abs(a[i-1]-a[i])==1) ansl*=a[i];
        else ansl=(ansl*a[i])/gcd(ansl,a[i]);
    }
    int ct=0;
    for(int i=ansl,j=1;i<ansg;i=j*ansl,++j){
        if(ansl%i==0) ++ct;
    }
    cout<<ct;
}
