#include<iostream>
#include<vector>
#include<string>
using namespace std;
int scr(string a){
    int sm=0;
    for(int i=0;i<a.length();++i) if(a[i]=='1') ++sm;
    return sm;
}
vector<string> prod(vector<string> a){
    vector<string> ans;
    for(int i=0;i<a.size();++i){
        for(int j=i+1;j<a.size();++j){
             ans.push_back(a[i]);
             ans.push_back(a[j]);
        }
    }
    return ans;
}
int test(string p,string q){
    string a="";
    for(int i=0;i<p.size();++i){
        if(p[i]=='1' || q[i]=='1') a+='1';
        else a+='0';
    }
    return scr(a);
}
int main(){
    int n,m;
    vector<string> a;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        a.push_back(s);
    }
    int ans2[500],maxx=0;
    for(int i=0;i<500+1;++i) ans2[i]=0;
    vector<string> ans=prod(a);

    for(int i=0;i<ans.size();i+=2){
        int t=test(ans[i],ans[i+1]);
        //cout<<maxx<<'\t'<<t<<endl;
        if(maxx<=t){
            maxx=t;
            ans2[maxx]++;
//            cout<<ans[i]<<'\t'<<ans[i+1]<<'\t'<<t<<endl;

        }
    }
    cout<<maxx<<endl<<ans2[maxx]<<endl;
}
