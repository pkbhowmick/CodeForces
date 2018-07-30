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
int main()
{
    ll n,x;
    sc2(n,x);
    set<ll>S;
    map<ll,ll>mp;
    ll xx=0;
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
        S.insert(arr[i]);
        mp[arr[i]]++;
        if(arr[i]==x)
            xx++;
    }
    if(S.size()<n)
    {
        cout<<0<<endl;
        return 0;
    }
    S.clear();
    map<ll,ll>mp2;
    for(ll i=1;i<=n;i++)
    {
        ll now=arr[i]&x;
        if(mp.count(now)>0&&arr[i]!=now)
        {
            printf("1\n");
            return 0;
        }
        mp2[now]++;
    }
    if(mp2.size()<n)
        printf("2\n");
    else
    printf("-1\n");
    return 0;

    return 0;
}

