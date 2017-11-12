#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    sort(keyboards.begin(),keyboards.end());
    reverse(keyboards.begin(),keyboards.end());
    sort(drives.begin(),drives.end());
    vector<int>:: iterator i;
    int ans=-1;
    for(i=keyboards.begin();i!=keyboards.end();++i){
        int t=s;
        if(*i<t){
            t-=*i;
            vector<int>:: iterator j;
            for(j=drives.begin();j!=drives.end();++j){
                if(t-*j>=0 && ans<(*j+*i)){
                    ans=*j+*i;
                }
            }
        }
        if(ans==s) break;
    }
    return ans;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}

