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
        ll n;
        sc1(n);
        if(360%(180-n)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
