#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll up[1005],down[1005];
ll n,load;

bool check(double fuel)
{
    double ld=(double)load+fuel;
    for(ll i=1;i<=n;i++)
    {
        if(i%2)
        {
            double need=ld/(double)up[i];
            fuel-=need;
            ld-=need;
        }
        else
        {
            double need=ld/(double)down[i];
            fuel-=need;
            ld-=need;
        }
        if(fuel<0)
            return true;;
    }
    for(ll i=n;i>=1;i--)
    {
        if(i%2==0)
        {
            double need=ld/(double)up[i];
            fuel-=need;
            ld-=need;
        }
        else
        {
            double need=ld/(double)down[i];
            fuel-=need;
            ld-=need;
        }
        if(fuel<0)
            return false;
    }
    return true;
}
int main()
{

    sc1(n);
    sc1(load);
    for(ll i=1;i<=n;i++)
    {
        sc1(up[i]);
    }
    for(ll i=1;i<=n;i++)
    {
        sc1(down[i]);
    }
    double lo=0.0;
    double hi=1000000000.0;
    double ans=hi;
    while(hi-lo>=0.0000001)
    {
        double mid=(lo+hi)/2.0;
        if(check(mid))
        {
            ans=min(ans,mid);
            hi=mid-0.0000001;
        }
        else
            lo=mid+0.0000001;

    }
    if(ans-0.000001>0)
    printf("%.10f\n",ans);
    else
        cout<<-1<<endl;

    return 0;
}
