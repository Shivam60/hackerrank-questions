#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t=5;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;++i){
        ans+=floor(t/2);
        t=floor(t/2)*3;
    }
    cout<<ans;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
