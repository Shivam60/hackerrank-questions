#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    int ct=0;
    for(int i=0;i+m<=n;++i){
        int sm=0;
        for(int j=i;j<i+m;++j){
            sm+=s[j];
        }
        if(sm==d) ++ct;

    }
    return ct;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
