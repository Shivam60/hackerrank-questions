#include<iostream>
#include<list>
using namespace std;
struct graph{
    long long v;
    list<long long> *adj;
};
void dfs(graph &g,long long vis[],long long &j,long long &f){
      list<long long>::iterator i;
      for(i=g.adj[j].begin();i!=g.adj[j].end();++i){
         if(vis[*i]==0){
            f++;
            vis[*i]=1;
            dfs(g,vis,*i,f);
         }
      }
}
int main(){
    graph g;
    long long p;
    cin>>g.v>>p;
    list<long long> adj[g.v];
    g.adj=adj;
    for(long long i=0;i<p;++i){
        long long a,b;
        cin>>a>>b;
        g.adj[a].push_back(b);
        g.adj[b].push_back(a);

    }
    for(long long i=0;i<p;++i){
        list<long long>::iterator j;
        cout<<i<<'\t';
        for(j=g.adj[i].begin();j!=g.adj[i].end();++j)
            cout<<*j<<'\t';
        cout<<endl;
    }
    long long vis[g.v];
    for(long long i=0;i<g.v;++i) vis[i]=0;
    list<long long> g1;
    for(long long i=0;i<g.v;++i){
        long long f=0;
        if(vis[i]==0){
            ++f;
            vis[i]=1;
            dfs(g,vis,i,f);
        }
        if(f)
            g1.push_back(f);
    }
    long long sum=0,result=0;
    list<long long>::iterator j;
    for(j=g1.begin();j!=g1.end();++j){
        result+=sum*(*j);
        sum+=*j;
        }
        cout<<result;
}
