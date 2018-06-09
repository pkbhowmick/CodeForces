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
    ll n,sum;
    vector<ll>ans;
    vector<ll>dns;
    sc2(n,sum);
    for(ll i=0;i<n;i++)
        ans.pb(9);
    for(ll i=0;i<n;i++)
        dns.pb(0);
    dns[n-1]=1;
    ll nowc=1;
    ll now=n*9;
    for(ll i=0;i<n;i++)
    {
        if(now>sum)
        {
            ll dif=now-sum;
            if(dif>=9)
            {
                ans[i]=0;
                now-=9;
            }
            else
            {
                ans[i]=9-dif;
                now-=dif;
            }
        }
        else if(now==sum)
            break;
    }
    for(ll i=0;i<n;i++)
    {
        if(nowc<sum)
        {
            ll dif=sum-nowc;
            if(dif>=9)
            {
                dns[i]=9;
                nowc+=9;
            }
            else
            {
                dns[i]=dif;
                nowc+=dif;
            }
            if(i==n-1){
                nowc--;
                dns[i]++;
            }
        }
        else if(nowc==sum)
            break;
    }
    if(sum!=now&&sum!=nowc)
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }
    sort(ans.begin(),ans.end());

    if(sum==0)
    {
        if(n==1)
        {
            cout<<"0 0"<<endl;
        }
        else
        {
            cout<<"-1 -1"<<endl;
        }
        return 0;
    }
    for(ll i=n-1;i>=0;i--)
    {
        cout<<dns[i];
    }
    cout<<" ";
    for(ll i=n-1;i>=0;i--)
    {
        cout<<ans[i];
    }

    cout<<endl;
    //main();
    return 0;
}
