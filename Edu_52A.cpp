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
    ll test;
    sc1(test);
    while(test--)
    {
        ll s,a,b,c;
        sc3(s,a,b);
        sc1(c);
        ll add1=s/c;
        add1=add1/a;
        ll ans=add1*(a+b);
        ll ase=s-(add1*a*c);
        ans+=ase/c;
        printf("%lld\n",ans);

    }
    return 0;
}
