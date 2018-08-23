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
    ll test;
    sc1(test);
    while(test--)
    {
        map<ll,ll>mp;
        set<ll>S;
        ll n,q;
        sc2(n,q);
        for(ll i=1;i<=n;i++){
            sc1(arr[i]);
            if(arr[i]!=0){
            mp[arr[i]]++;
            S.insert(arr[i]);
            }
        }
        while(q--)
        {
            ll t;
            sc1(t);
            if(t==1)
            {
                ll pos,val;
                sc2(pos,val);
                if(arr[pos]!=val)
                {
                    if(mp[arr[pos]]==1)
                    {
                        mp[arr[pos]]=0;
                        S.erase(S.find(arr[pos]));
                    }
                    else
                        mp[arr[pos]]--;

                    arr[pos]=val;
                    if(val!=0){
                    S.insert(val);
                    mp[val]++;
                    }
                }
            }
            else
            {
                ll ans=S.size();
                printf("%lld\n",ans);
            }
        }
    }
    return 0;
}
