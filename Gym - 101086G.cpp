#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[105];
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        memset(arr,0,sizeof arr);
        ll n;
        sc1(n);
        //getchar();

        ll ans=0;

        for(ll j=1; j<=3; j++)
        {
            getchar();
            for(ll k=1; k<=n*3; k++)
            {
                char ch;
                scanf("%c",&ch);
                if(ch=='*')
                {
                    ll id=(ceil)(k/3.00);
                    arr[id]+=4;
                }
            }
        }

        for(ll i=1; i<=n; i++)
            ans=max(ans,arr[i]);
        printf("%lld\n",ans);
    }
    return 0;
}
