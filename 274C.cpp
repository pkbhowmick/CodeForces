#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

struct A
{
    ll date;
    ll pre;
};
vector<A>V;
bool operator < (A a,A b)
{
    if(a.date!=b.date)
        return a.date<b.date;
    return a.pre<b.pre;
}
int main()
{
    ll n;
    sc1(n);
    for(ll i=1;i<=n;i++)
    {
        ll a,b;
        sc2(a,b);
        A aa;
        aa.date=a;
        aa.pre=b;
        V.pb(aa);
    }
    sort(V.begin(),V.end());
    ll sz=V.size();
    ll ans=0;
    ll now=0;
    for(ll i=0;i<sz;i++)
    {
        if(now<=V[i].pre)
            now=V[i].pre;
        else
            now=V[i].date;
    }
    cout<<now<<endl;

    return 0;
}

