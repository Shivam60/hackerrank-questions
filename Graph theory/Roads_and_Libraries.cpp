#include<iostream>
#include<list>
using namespace std;
struct graph{
    int v;
    list<long long> *adj;
};
void do_dfs(struct graph& g,long long i,long long vis[],long long& c){
    list<long long>::iterator ptr;
    for(ptr=g.adj[i].begin();ptr!=g.adj[i].end();++ptr){
        if(vis[*ptr]==0){
            vis[*ptr]=1;
            ++c;
            do_dfs(g,*ptr,vis,c);
        }
    }
}
int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;++i){
        graph g;
        long long cr,cl,e;
        cin>>g.v>>e>>cl>>cr;
        list<long long> adj[g.v];
        g.adj=adj;
        for(int j=0;j<e;++j){
            long long a,b;
            cin>>a>>b;
            g.adj[a-1].push_back(b-1);
            g.adj[b-1].push_back(a-1);
        }
        long long vis[g.v];
        for(long long j=0;j<g.v;++j) vis[j]=0;

        if(cl>cr && e>0){
            long long c=0,l=0;
            for(long long j=0;j<g.v;++j){
                if(vis[j]==0){
                    ++l;
                    vis[j]=1;
                    do_dfs(g,j,vis,c);
                }
            }
            cout<<c*cr+l*cl<<endl;
        }
        else{
            cout<<cl*g.v<<endl;
        }
    }
}
