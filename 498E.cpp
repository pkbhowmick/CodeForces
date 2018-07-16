#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
vector<ll>V[200005];
ll vis[200005];
ll start[200005];
ll node[200005];
ll tot[400005];
ll ans;
ll now;
void dfs(ll u)
{
    vis[u]=1;
    start[u]=++now;
    tot[now]=u;
    for(ll i=0;i<V[u].size();i++)
    {
        ll v=V[u][i];
        if(vis[v]==0)
        {

            dfs(v);
        }
    }
    node[u]=now-start[u]+1;
}
int main()
{
    memset(vis,0,sizeof vis);
    ll n,q;
    sc2(n,q);
    for(ll i=2;i<=n;i++)
    {
        ll p;
        sc1(p);
        V[p].pb(i);
    }
    now=0;
    dfs(1);
    while(q--)
    {
        ll u,k;
        sc2(u,k);
        ll st=start[u];
        if(node[u]>=k)
        {
            printf("%lld\n",tot[st+k-1]);
        }
        else
            printf("-1\n");
    }
    return 0;
}
