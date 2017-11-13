#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> brk(int n){
    vector<int> ans;
    while(n){
        if(n%10) ans.push_back(n%10);
        n/=10;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    vector<int> ans;
    for(int a0 = 0; a0 < t; a0++){
        int n,ctr=0;
        cin >> n;
        ans=brk(n);
        for(int j=0;j<ans.size();++j) if(n%ans[j]==0) ++ctr;
        cout<<ctr<<endl;
    }
    return 0;
}
