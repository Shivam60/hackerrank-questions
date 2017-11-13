#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long rev(long a){
    long ans=0;
    while(a){
        ans=ans*10+a%10;
        a/=10;
    }
    return ans;
}

int main() {
    long i,j,k;
    cin>>i>>j>>k;
    long ans=0;
    for(long a=i;a<=j;++a){
        long t=rev(a);
        long p=abs(a-t);

        if(p%k==0 || p==0) ++ans;
    }
    cout<<ans;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
