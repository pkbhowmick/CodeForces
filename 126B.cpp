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
    ll n;
    ll sum=0;
    sc1(n);
    for(ll i=0;i<n;i++)
    {
        ll v;
        sc1(v);
        sum+=v;
    }
    double d=(double)sum/(double)(n);
    printf("%.10f\n",d);
    //main();
    return 0;
}
