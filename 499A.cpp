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
    ll arr[30]={0};
    ll n,k;
    sc2(n,k);
    string str;
    cin>>str;
    ll l=str.size();
    for(ll i=0;i<l;i++)
    {
        ll now=str[i]-'a';
        arr[now]++;
    }
    ll ans=INT_MAX;
    for(ll i=0;i<26;i++)
    {
        ll now=0;
        ll cnt=0;
        for(ll j=i;j<26;j++)
        {
            if(arr[j]>0)
            {
                cnt++;
                now+=j+1;
                j++;
            }
            if(cnt==k)
                break;
        }
        if(cnt==k)
            ans=min(ans,now);
    }
    if(ans==INT_MAX)
        printf("-1\n");
    else
        printf("%lld\n",ans);
    return 0;
}
