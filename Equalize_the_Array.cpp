#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> a(101),b(101);
    fill(b.begin(), b.end(), 0);
    for(int i=1;i<=n;++i){
        cin>>a[i];
        b[a[i]]+=1;
    }
    cout<<n-*max_element(b.begin(),b.end());
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
