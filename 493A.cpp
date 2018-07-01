#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;


bool check(ll n,ll i)
{
    return n&(1<<i);
}
ll arr[20];
int main()
{
    ll n;
    sc1(n);

    ll mx=pow(2,n);

    ll tot=0;
    for(ll i=0; i<n; i++)
    {
        sc1(arr[i]);
        tot+=arr[i];
    }
    for(ll i=1; i<mx-1; i++)
    {
        ll cnt=0;
        ll sum=0;
        for(ll j=0; j<n; j++)
        {
            if(check(i,j)){
                sum+=arr[j];
                cnt++;
            }
        }
        ll baki=tot-sum;
        if(sum>baki||sum<baki)
        {
            cout<<cnt<<endl;
            for(ll j=0; j<n; j++)
            {
                if(check(i,j))
                    {
                        cout<<j+1<<" ";
                    }
            }
            cout<<"\n";
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
