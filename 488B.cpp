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
    ll id;
    ll coin;
    ll power;
};
vector<A>V;
ll po[100005];

ll co[100005];
bool operator <(A a,A b)
{
    return a.power<b.power;
}
ll ans[100005];
int main()
{
    ll n,take;
    sc2(n,take);

    for(ll i=1;i<=n;i++)
    {
        sc1(po[i]);
    }
    for(ll i=1;i<=n;i++)
    {
        ll c;
        sc1(c);
        A aa;
        aa.id=i;
        aa.power=po[i];
        aa.coin=c;
        V.pb(aa);
    }
    sort(V.begin(),V.end());
    //ll take=min(n-1,(ll)10);
    priority_queue<ll, vector<ll>, greater<ll> >pq;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll pp=V[i].coin;
        ll id=V[i].id;
        if(pq.size()>take)
        {
            ll top=pq.top();
           // cout<<top<<" del\n";
            pq.pop();
            sum-=top;
        }
        ans[id]=sum+pp;
        sum+=pp;
        pq.push(pp);
    }
    for(ll i=1;i<=n;i++)
    {
        printf("%lld ",ans[i]);
    }
    printf("\n");
    return 0;
}
