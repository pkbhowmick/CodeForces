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
    ll cnt[30]={0};
    string a,b,c;
    cin>>a>>b>>c;
    ll la=a.size();
    ll lb=b.size();
    ll lc=c.size();
    if(la+lb!=lc)
    {
        printf("NO\n");
    }
    else
    {
        for(ll i=0;i<la;i++)
        {
            ll now=a[i]-'A';
            cnt[now]++;
        }
        for(ll i=0;i<lb;i++)
        {
            ll now=b[i]-'A';
            cnt[now]++;
        }
        for(ll i=0;i<lc;i++)
        {
            ll now=c[i]-'A';
            cnt[now]--;
        }
        for(ll i=0;i<26;i++)
        {
            if(cnt[i]!=0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;

    }
    return 0;
}
