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
    ll ans=0;
    for(ll i=0;i<=(n-1)/2;i++)
    {
        if(i==n-i-1)
        {
            //cout<<"ok"<<endl;
            if(a[i]!=b[i])
            {
                ans++;
            }
            continue;
        }
        if(a[i]==a[n-1-i]&&b[i]==b[n-i-1])
             continue;
        if(a[i]==b[i]&&a[n-i-1]==b[n-i-1])
            continue;
        if(a[i]==b[n-1-i]&&a[n-i-1]==b[i])
            continue;
        if(a[i]==b[n-1-i]&&a[n-i-1]==b[i])
            continue;
        ans++;
        if(a[i]!=b[n-i-1]&&a[n-i-1]!=b[i]&&a[i]!=b[i]&&a[n-i-1]!=b[n-i-1]&&b[i]!=b[n-i-1])
            ans++;

        //cout<<"stage "<<i<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    //main();
    return 0;
}
