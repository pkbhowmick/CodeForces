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
    string str;
    cin>>str;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(str[i]=='8')
            cnt++;
    }
    ll baki=n-cnt;
    ll v=min(cnt,baki/10);
    cnt-=v;
    baki-=v*10;
    ll ans=v;
    if(cnt>0&&cnt+baki>=11)
    {
        ans++;
        cnt-=(11-baki);
    }
    ans+=(cnt/11);
    cout<<ans<<endl;
    //main();
    return 0;
}
