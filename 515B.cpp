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
struct A
{
    ll l,r;
};
vector<A>V;
int main()
{
    ll n,r;
    sc2(n,r);
    for(ll i=1;i<=n;i++)
    {
        ll v;
        sc1(v);
        ll lo,hi;
        if(v==1)
        {
            lo=max(1LL,i-r+1);
            hi=min(n,i+r-1);
            A aa;
            aa.l=lo;
            aa.r=hi;
            V.pb(aa);
        }
    }
    ll sz=V.size();
    if(sz==0)
    {
        printf("-1\n");
        return 0;
    }
    ll last=0;
    ll ans=0;
    for(ll i=0;i<sz;i++)
    {
        //cout<<V[i].l<<" "<<V[i].r<<endl;
        if(V[i].l>last+1)
        {
            printf("-1\n");
            return 0;
        }

        if(V[i].l<=last+1&&i+1<sz&&V[i+1].l<=last+1)
        {
            //cout<<V[i+1].l<<" "<<last<<endl;
            continue;
        }
        else
        {
            //cout<<i+1<<endl;
            ans++;
            last=V[i].r;
        }
        if(last>=n)
            break;
    }
    if(last<n)
    {
        printf("-1\n");
        return 0;
    }
    printf("%lld\n",ans);
    return 0;
}
/*
10 3
0 1 1 0 1 1 0 1 0 0
*/
