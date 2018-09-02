#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[100005];
ll cum[5001];
ll intlog(double base, double x) {
    return (ll)((ceil)(log(x) / log(base)));
}
int main()
{
    ll n;
    sc1(n);
    ll cnt=0;
    while(n!=0)
    {
        n=n/2;
        cnt++;
    }
    cout<<cnt<<endl;
    //main();
   // main();
    /*
    arr[1]=1;
    arr[2]=2;
    for(ll i=3;i<=200;i++)
    {
        arr[i]=arr[i-1]+arr[i-2]+1;
    }

    //cout<<arr[200]<<endl;

    cum[0]=0;
    for(ll i=1;i<=200;i++)
    {
        cum[i]=arr[i]+cum[i-1];
    }
    //cout<<cum[200]<<endl;
    ll n;
    sc1(n);
    ll cnt=0;
    for(ll i=1;i<=200;i++)
    {
        cnt++;
        if(cum[i]>=n)
            break;
    }
    printf("%lld\n",cnt);
    //main();
    */
}
