#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[200005];
int main()
{
    ll n;
    sc1(n);
    for(ll i=1;i<=2*n;i++)
    {
        sc1(arr[i]);
    }
    sort(arr+1,arr+n+n+1);
    ll a=arr[n]-arr[1];
    ll b=arr[2*n]-arr[n+1];
    ll ans=a*b;
    for(ll i=2;i<=n;i++)
    {
        ll l=arr[i+n-1]-arr[i];
        ll r=arr[2*n]-arr[1];
        //cout<<l<<" "<<r<<endl;
        ans=min(ans,(ll)l*r);
    }
    cout<<ans<<endl;
    //main();
    return 0;
}

