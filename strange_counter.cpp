#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long n,t=0,i=1,z=3;
    cin>>n;
    while(true){
        t=3*pow(2,i)-2;
        z*=2;
        if(n<t) break;
        else ++i;
    }
    t=3*pow(2,i-1)-2;
    z/=2;
    cout<<(z+(n-t)*(-1))<<endl;
}
