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
int main()
{
    ll n;
    sc1(n);
    ll tot=0;
    ll sup=0;
    vector<ll>zero;
    vector<ll>onezero;
    vector<ll>zeroone;
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        string ty;
        ll val;
        cin>>ty;
        sc1(val);
        if(ty=="00")
            zero.pb(val);
        else if(ty=="01")
            zeroone.pb(val);
        else if(ty=="10")
            onezero.pb(val);
        else{
            tot++;
            sup++;
            ans+=val;
        }
    }
    ll mn=min(onezero.size(),zeroone.size());

    sort(onezero.begin(),onezero.end(),greater<int>() );
    sort(zeroone.begin(),zeroone.end(),greater<int>() );
    tot+=mn*2;
    sup+=mn;
    for(ll i=0;i<mn;i++)
    {
        ans+=zeroone[i]+onezero[i];
    }
    for(ll i=mn;i<onezero.size();i++)
    {
        zero.pb(onezero[i]);
    }
    for(ll i=mn;i<zeroone.size();i++)
    {
        zero.pb(zeroone[i]);
    }
    sort(zero.begin(),zero.end(),greater<int>() );
    for(ll i=0;i<zero.size()&&tot+1<=sup*2;i++)
    {
        ans+=zero[i];
        tot++;
    }
    printf("%lld\n",ans);
    //main();
    return 0;
}
