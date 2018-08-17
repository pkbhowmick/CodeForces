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
    ll n,k;
    sc2(n,k);
    ll l=(k+1)/2;
    l--;
    ll r=l+1;
    if(k%2==0)
        r++;
    r=n-r+1;
    ll ans=min(l,r);
    if(ans<0)
        ans=0;
    printf("%lld\n",ans);
    //main();
    return 0;
}
