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
    sc1(n);
    if(n<=2)
    {
        cout<<"No"<<endl;
        return 0;
    }
    ll sum=n*(n+1)/2;
    if(sum%2==0)
    {
        cout<<"Yes"<<endl;
        cout<<n/2;
        for(ll i=2; i<=n; i+=2)
        {
            printf(" %lld",i);
        }
        printf("\n");

        cout<<n-n/2;
        for(ll i=1; i<=n; i+=2)
        {
            printf(" %lld",i);
        }
        printf("\n");
        return 0;
    }
    for(ll i=2;i<n;i++)
    {
        if((sum-i)%i==0)
        {
            printf("Yes\n");
            printf("1 %lld\n",i);
            printf("%lld",n-1);
            for(ll j=1;j<=n;j++)
            {
                if(j==i)continue;
                printf(" %lld",j);
            }
            printf("\n");
            return 0;
        }
    }
    printf("No\n");
    //main();
    return 0;
}
