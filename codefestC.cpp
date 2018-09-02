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
    string a,b;
    cin>>a>>b;
    ll l=a.size();

    ll ans=0;
    for(ll i=0;i<l;i++)
    {
        if(a[i]!=b[i])
        {
            if(i+1<n&&a[i+1]!=b[i+1]&&((a[i]-'0')+(a[i+1]-'0')==1))
            {
                ans++;
                i++;
            }
            else
            {
                ans++;
                a[i]=b[i];
            }
        }
    }

    printf("%lld\n",ans);


    return 0;
}
