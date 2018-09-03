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
    ll n,q;
    sc2(n,q);
    while(q--)
    {
        ll x,y;
        sc2(x,y);
        if((x+y)%2==0)
        {
            ll now=(x-1)*(n/2);
            if(n%2)
            {
                now+=(x)/2;
            }
            now+=y/2;
            if(y%2&&x%2)
                now++;

            printf("%lld\n",now);
        }
        else
        {
            ll now=(x-1)*(n/2)+(n*n)/2;
            if(n%2)
            {
                ++now;
                now+=(x-1)/2;
            }
            now+=y/2;
            if(x%2==0&&y%2==1)
                now++;

            printf("%lld\n",now);
        }
    }
    return 0;
}

