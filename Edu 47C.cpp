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
    ll n,m;
    sc2(n,m);
    ll sum=0;
    for(ll i=1; i<=m; i++)
    {
        ll x,d;
        sc2(x,d);
        sum+=x*n;
        if(d>0)
        {
            sum+=(n*(n-1)*d)/2.0;
        }
        else
        {
            if(n%2)
            {
                ll hl=(n+1)/2;
                ll add=(hl*(hl-1)*d)/2.0;
                add=add*2.0;
                sum+=add;
            }
            else
            {
                ll hl=n/2;
                ll add=(hl*(hl-1)*d)/2.0;
                hl++;
                add+=(hl*(hl-1)*d)/2.0;
                sum+=add;
            }
        }
    }
    double ans=(double)sum/(double)n;
    printf("%.10f\n",ans);
    return 0;
}
