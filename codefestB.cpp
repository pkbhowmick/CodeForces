#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[300005];
int main()
{
    ll n,s;
    sc2(n,s);
    for(ll i=0;i<n;i++)
    {
        sc1(arr[i]);
    }
    sort(arr,arr+n);
    ll id=n/2;
    ll ans=abs(arr[id]-s);
    for(ll i=id+1;arr[i]<s&&i<n;i++)
    {
        ans+=s-arr[i];
    }
    for(ll i=id-1;arr[i]>s&&i>=0;i--)
    {
        ans+=arr[i]-s;
    }
    printf("%lld\n",ans);

}
