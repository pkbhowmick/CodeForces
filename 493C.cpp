#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

int main()
{
    ll n,x,y;
    sc3(n,x,y);

    vector<ll>V;
    string str;
    cin>>str;
    ll now=0;
    for(ll i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            if(now>0)V.pb(now);
            now=0;
        }
        else
            now++;
    }
    if(now>0)
        V.pb(now);
    ll cnt=0;
    ll sz=V.size();
    if(sz==0)
    {
        cout<<0<<endl;
        return 0;
    }
    //ll ans=0;
    //cout<<sz<<endl;
    for(ll i=1;i<sz;i++)
    {
        if((x*i+y)<((i+1)*y))
        {
            cnt++;
        }
        else
            break;
    }
    ll ans=0;
    if(cnt>0)
    {
        ans+=cnt*x+y;
        if(sz-1-cnt>0)
            ans+=(sz-1-cnt)*y;
    }
    else
        ans+=sz*y;
    cout<<ans<<endl;
    //main();
    return 0;
}
