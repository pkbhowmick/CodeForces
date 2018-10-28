#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
struct A
{
    ll val;
    ll x;
    ll y;
};
vector<A>V;
bool operator <(A a,A b)
{
    return a.val>b.val;
}
int main()
{
    V.clear();
    string str;
    cin>>str;
    ll len=str.size();
    ll now=0;
    ll mark[1005];
    memset(mark,0,sizeof mark);
    for(ll i=0; i<len; i++)
    {
        if(str[i]=='a')
        {
            now++;
        }
        else
            break;
    }

    if(now>0)
    {
        A a;
        a.x=now-1;
        a.y=0;
        a.val=now;
        V.pb(a);
    }
    for(ll i=now; i<len; i++)
    {
        ll j=i;
        while(j<len&&str[j]=='a')
        {
            j++;
        }
        if(j>i)
        {

            A a;
            if(j==len&&V.size()==0)
                a.x=len+1;
            else
                a.x=i-1;
            a.y=j-1;
            a.val=j-i;
            V.pb(a);
            i=j-1;
        }
    }
    sort(V.begin(),V.end());

    ll sz=V.size();
    //cout<<sz<<endl;
    for(ll i=0; i<sz; i++)
    {

        mark[V[i].x]=1;
        mark[V[i].y]=1;

    }
    for(ll i=0; i<len; i++)
    {
        printf("%lld ",mark[i]);
    }
    printf("\n");
    //main();
    return 0;
}
