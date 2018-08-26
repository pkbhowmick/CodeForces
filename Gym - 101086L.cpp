#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

bool prime[205];
ll res[MX+5];

void seive()
{
    prime[0]=true;
    prime[1]=true;
    for(ll i=4; i<=200; i+=2)
        prime[i]=true;
    for(ll i=3; i<=200; i+=2)
    {
        if(!prime[i])
        {
            for(ll j=i+i; j<=200; j+=i)
                prime[j]=true;
        }
    }
}
int main()
{
    seive();
    res[0]=0;
    for(ll i=1; i<=MX; i++)
    {
        res[i]=0;
        ll now=i;
        ll cnt=0;
        while(now!=0)
        {
            ll r=now%2;
            if(r==1)
                cnt++;
            now=now/2;
        }
        if(prime[cnt]==false)
            res[i]=1;

        res[i]=res[i]+res[i-1];
    }
    ll test;
    sc1(test);
    while(test--)
    {
        ll l,r;
        sc2(l,r);
        if(l==0)
            l++;
        ll ans=res[r]-res[l-1];
        printf("%lld\n",ans);
    }
    return 0;
}
