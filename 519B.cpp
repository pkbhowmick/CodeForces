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
int main()
{
    ll n;
    sc1(n);
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
    }
    vector<ll>V;
    V.pb(arr[1]);
    for(ll i=2;i<=n;i++)
    {
        V.pb(arr[i]-arr[i-1]);
    }

    ll sz=V.size();
    vector<ll>ans;
    ans.pb(n);
    for(ll i=1;i<sz;i++)
    {
        ll ok=1;
        for(ll j=i,k=0;j<sz&&k<sz;j++,k++)
        {
            if(V[j]!=V[k])
            {
                ok=0;
                break;
            }
        }
        if(ok)
            ans.pb(i);
    }
    sort(ans.begin(),ans.end());
    sz=ans.size();
    printf("%lld\n",sz);
    for(ll i=0;i<sz;i++)
    {
        printf("%lld ",ans[i]);
    }
    printf("\n");
    //main();
    return 0;
}
