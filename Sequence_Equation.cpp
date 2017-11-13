#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> p(n+1),x(n+1);
    for(int i=1;i<=n;++i) cin>>p[i];
    for(int i=1;i<=n;++i) x[p[p[p[i]]]]=p[i];
    for(int i=1;i<=n;++i) cout<<x[i]<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
