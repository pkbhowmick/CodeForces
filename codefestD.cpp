#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

vector<ll>V[300005];
ll arr[300005];
ll brr[300005];
ll dis[300005];
vector<ll>ch[300005];
map<ll,ll>mp;
ll par[300005];
void bfs(ll s)
{
    dis[s]=0;
    queue<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(ll i=0;i<V[u].size();i++)
        {
            ll v=V[u][i];
            if(dis[v]==-1)
            {
                dis[v]=dis[u]+1;
                brr[mp[v]]=dis[v];
                q.push(v);
                par[v]=u;
            }
        }
    }
}
int main()
{
    ll n;
    sc1(n);
    for(ll i=1;i<n;i++)
    {
        ll u,v;
        sc2(u,v);
        V[u].pb(v);
        V[v].pb(u);
    }
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
        mp[arr[i]]=i;
        dis[i]=-1;
    }
    if(arr[1]!=1)
    {
        printf("No\n");
        return 0;
    }
    brr[1]=0;
    bfs(1);
    queue<ll>kk;
    kk.push(1);
    for(ll i=2;i<=n;i++)
    {
        if(par[arr[i]]!=kk.front())
        {
            kk.pop();
        }
        if(!kk.empty()&&par[arr[i]]==kk.front())
        {
            if(V[arr[i]].size()>1)
            kk.push(arr[i]);
        }
        else
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}

