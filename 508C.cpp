#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

priority_queue<ll>q1;
priority_queue<ll>q2;

int main()
{
    ll n;
    sc1(n);
    for(ll i=1;i<=n;i++)
    {
        ll v;
        sc1(v);
        q1.push(v);
    }
    for(ll i=1;i<=n;i++)
    {
        ll v;
        sc1(v);
        q2.push(v);
    }
    ll now=1;
    ll a=0,b=0;
    while(!q1.empty()||!q2.empty())
    {
        if(now)
        {
            if(q2.empty())
            {
                a+=q1.top();
                q1.pop();
            }
            else if(q1.empty())
            {
                q2.pop();
            }
            else
            {
                ll x=q1.top();
                ll y=q2.top();
                if(x>y)
                {
                    a+=x;
                    q1.pop();
                }
                else
                {
                    q2.pop();
                }
            }
            now=0;
        }
        else
        {
            if(q1.empty())
            {
                b+=q2.top();
                q2.pop();
            }
            else if(q2.empty())
            {
                q1.pop();
            }
            else
            {
                ll x=q1.top();
                ll y=q2.top();
                if(y>x)
                {
                    b+=y;
                    q2.pop();
                }
                else
                {
                    q1.pop();
                }
            }
            now=1;
        }

    }
    cout<<a-b<<endl;
    return 0;
}
