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

ll bs(ll n,ll m)
{
    ll lo=0;
    ll hi=100000;
    ll mid;
    ll ans;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if((mid*(mid+1))/2>=m)
        {
            hi=mid-1;
            ans=mid;
        }
        else
            lo=mid+1;
    }
    return ans+1;
}
int main()
{
    ll n,m;
    sc2(n,m);
    if(m==0)
    {
        printf("%lld %lld\n",n,n);
        return 0;
    }
    ll mn=n-(m*2);
    if(mn<0)mn=0;
    ll mx=n-bs(n,m);
    printf("%lld %lld\n",mn,mx);
    //main();

    return 0;
}
