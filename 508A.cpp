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
    ll n,k;
    sc2(n,k);
    string str;
    cin>>str;
    ll arr[30]={0};
    for(ll i=0;i<n;i++)
    {
        arr[str[i]-'A']++;
    }
    ll mn=1e18;
    for(ll i=0;i<k;i++)
    {
        mn=min(mn,arr[i]);
    }
    cout<<mn*k<<endl;
    //main();
    return 0;
}
