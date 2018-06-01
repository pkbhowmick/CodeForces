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
int main()
{
    map<ll,ll>mp;
    map<ll,ll>SUM;
    ll n;
    sc1(n);
    ll lo;
    ll hi;
    ll ss;
    ll paici=false;
    for(ll i=1;i<=n;i++)
    {
        ll m;
        sc1(m);
        ll sum=0;
        set<ll>S;
        for(ll j=1;j<=m;j++)
        {
            ll v;
            sc1(v);
            S.insert(v);
            sum+=v;
            V[i].pb(v);
        }
        SUM[i]=sum;
        ll sz=S.size();
        auto it=S.begin();
        for(ll j=0;j<sz&&paici==false;j++)
        {
            ll now=sum-(*it);
            it++;
            if(mp.find(now)!=mp.end()&&mp[now]!=i)
            {
                lo=mp[now];
                hi=i;
                paici=true;
                ss=now;
            }
            mp[now]=i;
        }
    }
    if(paici==false)
    {
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
    ll need=SUM[lo]-ss;
    for(ll i=0;i<V[lo].size();i++)
    {
        if(V[lo][i]==need)
        {
            printf("%lld %lld\n",lo,i+1);
            break;
        }
    }
    need=SUM[hi]-ss;
    for(ll i=0;i<V[hi].size();i++)
    {
        if(V[hi][i]==need)
        {
            printf("%lld %lld\n",hi,i+1);
            break;
        }
    }

    return 0;
}
