#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long> f(5);
    for(int i=0;i<5;++i) f.push_back(0);
    for(int ar_i = 0; ar_i < n; ar_i++){
       int t;
       cin>>t;
       f[t-1]+=1;
    }
    vector<long> a=f;
    vector<int> an;
    sort(f.begin(),f.end());
    reverse(f.begin(),f.end());
    for(int i=0;i<5;++i){
        if(a[i]==f[0]) an.push_back(i+1);
    }
    sort(an.begin(),an.end());

    cout << an[0] << endl;
    return 0;
}
