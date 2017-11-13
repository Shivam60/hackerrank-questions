#include<iostream>
#include<string>
#include<vector>
using namespace std;
string add(string a, string b){
    if(a=="" || b==""){
        return (a=="") ? b:a;
    }
    while(a.size()!=b.size()){
        if(a.size()>b.size()) b="0"+b;
        else a="0"+a;
    }
    int carry=0;
    string ans=b;
    for(int i=a.size()-1;i>-1;--i){
        carry=(a[i]-'0')+carry+(b[i]-'0');
        ans[i]=(carry%10)+'0';
        carry/=10;
    }
    if(carry) ans=to_string(carry)+ans;
    return ans;
}
string multiply(string a,int d1){
    if(d1%10==0){
       do{
        a+="0";
        d1/=10;
       }while(d1 && d1!=d1%10);
       return multiply(a,d1);
    }
    int j=0;
    string ans="";
    do{
        string b=a;
        int carry=0;
        int d=d1%10;
        if(d){
            for(int i=b.size()-1;i>-1;--i){
                int p=(b[i]-'0')*d + carry;
                b[i]=p%10+'0';
                carry=p/10;
            }
        }
        else b="0";
        d1/=10;
        if(carry) b=to_string(carry)+b;
        if(j){
            for(int i=0;i<j;++i) b+='0';
        }
       // cout<<ans<<'+'<<b<<endl;
        ans=add(ans,b);
        ++j;
    }while(d1);
    return ans;
}
string fact(int d1,vector<string>& arr){
    if(d1==1) return "1";
    if(arr[d1]=="0"){
        arr[d1]=multiply(fact(d1-1,arr),d1);
        return arr[d1];
    }
    else return arr[d1];
}
int main(){
    vector<string> arr(101,"0");
    int d1;
    cin>>d1;
    cout<<fact(d1,arr)<<endl;

    return 0;
}
