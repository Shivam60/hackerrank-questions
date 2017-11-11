#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long h,l,cth=0,ctl=0;
    for(int i=0;i<n;++i){
        long long t;
        cin>>t;
        if(i==0){
            h=l=t;
        }
        else{
            if(t>h) ++cth;
            if(t<h) ++ctl;
        }
    }
    cout<<cth<<ctl;
}
