#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll n,a,b,c;
ll ans;
ll arr[5];
ll dis[4005];
void bfs(ll s)
{
    for(ll i=0;i<=n;i++)
        dis[i]=0;
    ll ans=0;
    queue<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll u=q.front();

        q.pop();
        for(ll i=0;i<3;i++)
        {
            ll v=u+arr[i];
            if(v==n)
            {
                ans=max(ans,dis[u]+1);
            }
            else if(v<n&&dis[v]<dis[u]+1)
            {
                q.push(v);
                dis[v]=dis[u]+1;
            }
        }
    }
    printf("%lld\n",ans);
}
int main()
{
    sc3(n,arr[0],arr[1]);
    sc1(arr[2]);
    sort(arr,arr+3);
    bfs(0);

}
