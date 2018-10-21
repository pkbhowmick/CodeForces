#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
ll arr[100005];
ll vis[100005];
int main()
{
    memset(vis,0,sizeof vis);
    ll n;
    sc1(n);
    for(ll i=1; i<=n; i++)
    {
        sc1(arr[i]);
    }
    ll now=0;
    for(ll i=1; i<=n; i++)
    {
        if(arr[i]==now)
        {
            now++;
            vis[arr[i]]=1;
        }
        else if(arr[i]>100000)
        {
            printf("%lld\n",i);
            return 0;
        }
        else if(vis[arr[i]]==0)
        {
            printf("%lld\n",i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
