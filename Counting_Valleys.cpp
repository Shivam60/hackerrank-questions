#include <bits/stdc++.h>

using namespace std;
int sum(int);
void onceInATram(string x) {
    int summ=0,d=0;
    for(int i=0;i<3;++i) summ=summ*10+(x[i]-'0');
    for(int i=3;i<6;++i) d=d*10+(x[i]-'0');
    ++d;
    while(sum(summ)!=sum(d) && nodig(d)!=3){
        d++;
    }
    cout<<summ<<d<<endl;
}
int nodig(int x){


}
int sum(int x){
    int a=0;
    while(true){
        a+=x%10;
        x=int(x/10);
        if (x==0) break;
    }
    return a;
}
int main() {
    string x;
    cin >> x;

    onceInATram(x);

    return 0;
}
