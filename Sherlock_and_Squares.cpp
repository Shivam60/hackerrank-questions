#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int count =  floor(sqrt(b)) - ceil(sqrt(a)) + 1;
        cout<<count<<endl;


    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
