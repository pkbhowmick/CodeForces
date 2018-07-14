#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[1005];
int main()
{
    ll n,m;
    sc2(n,m);
    queue<ll>q;
    for(ll i=0;i<n;i++)
    {
        sc1(arr[i]);
    }
    for(ll i=0;i<m;i++)
    {
        ll v;
        sc1(v);
        q.push(v);
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(q.empty())break;
        if(arr[i]<=q.front())
        {
            ans++;
            q.pop();
        }
    }
    cout<<ans<<endl;
    //main();
    return 0;
}
