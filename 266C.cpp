#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll cum[500005];
int main()
{
    ll n;
    sc1(n);
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        ll v;
        sc1(v);
        sum+=v;
        cum[i]=sum;
    }
    if(sum%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    ll ans=0;
    ll cnt=0;
    ll fr=sum/3;
    ll se=fr*2;
    for(ll i=1;i<n;i++)
    {
        if(cum[i]==fr)cnt++;
        else if(cum[i]==se)ans+=cnt;
    }
    if(fr==se)
    {
        ans=cnt*(cnt-1);
        ans=ans/2;
    }
    cout<<ans<<endl;
    return 0;
}
