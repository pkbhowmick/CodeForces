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
    if(m<n-1)
    {
        printf("Impossible\n");
        return 0;
    }
    vector<ll>v1,v2;
    bool stop=true;
    for(ll i=1;i<n&&stop;i++)
    {
        for(ll j=i+1;j<=n&&stop;j++)
        {
            if(__gcd(i,j)==1)
            {
                v1.pb(i);
                v2.pb(j);
            }
            if(v1.size()==m)
            {
                stop=false;
                break;
            }
        }
    }
    if(stop)
    {
        printf("Impossible\n");
        return 0;
    }

    printf("Possible\n");

    for(ll i=0;i<m;i++)
    {
        printf("%lld %lld\n",v1[i],v2[i]);
    }


    return 0;
}
