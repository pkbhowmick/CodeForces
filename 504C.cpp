#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
ll arr[200005];
int main()
{
    memset(arr,0,sizeof arr);
    ll n,k;
    sc2(n,k);
    string str;
    cin>>str;
    if(n==k)
    {
        cout<<str<<endl;
        return 0;
    }
    ll bad=n-k;
    stack<ll>S;
    ll len=str.size();
    for(ll i=0; i<len; i++)
    {
        if(str[i]=='(')
        {
            S.push(i);
        }
        else
        {
            bad-=2;
            ll now=S.top();
            arr[i]=1;
            arr[now]=1;
            S.pop();
            if(bad<=0)
                break;
        }

    }
    for(ll i=0; i<len; i++)
    {
        if(arr[i]==0)
            printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
