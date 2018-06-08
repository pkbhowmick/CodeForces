#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

bool check(string str)
{
    ll len=str.size();
    if(len<2)return false;
    ll a=str[len-2]-'0';
    ll b=str[len-1]-'0';
    if(a==2&&b==5)return true;
    if(a==0&&b==0)return true;
    if(a==7&&b==5)return true;
    if(a==5&&b==0)return true;

    return false;
}

ll ase1(string str)
{
    ll len=str.size();
    vector<ll>v;

    for(ll i=0;i<len;i++)
    {
        if(str[i]=='0')
            v.pb(i);
    }
    ll sz=v.size();
    if(sz<2)
        return -1;

    sort(v.begin(),v.end());
    ll b=v[sz-1];
    ll a=v[sz-2];

    ll bi=len-1;
    ll ans=(bi-b)+(bi-1-a);
    return ans;


}
ll ase2(string str)
{
    ll len=str.size();
    vector<ll>v0;
    vector<ll>v5;

    for(ll i=len-1;i>=0;i--)
    {
        if(str[i]=='0')
            v0.pb(i);
        if(str[i]=='5')
            v5.pb(i);
    }
    ll sz0=v0.size();
    ll sz5=v5.size();
    if(sz0==0||sz5==0)
        return -1;
    if(sz5==1&&sz0+sz5==len)
        return -1;

    //sort(v.begin(),v.end());
    ll z=v0[0];
    ll ans=(len-1-z);
    for(ll i=z;i<len-1;i++)
        str[i]=str[i+1];

    str[len-1]='0';

    ll f;
    for(ll i=len-1;i>=0;i--)
    {
        if(str[i]=='5'){
            f=i;
            break;
        }
    }
    ans+=(len-2-f);
    while(str[f+1]=='0'&&f<len-2)
    {
        ans++;
        f++;
    }
    return ans;


}
ll ase3(string str)
{
    ll len=str.size();
    vector<ll>v2;
    vector<ll>v5;
    ll ze=0;
    for(ll i=len-1;i>=0;i--)
    {
        if(str[i]=='2')v2.pb(i);
        if(str[i]=='5')v5.pb(i);
        if(str[i]=='0')ze++;
    }
    ll sz2=v2.size();
    ll sz5=v5.size();
    if(sz2==0||sz5==0)return -1;
    if(sz2==1&&sz5==1&&sz2+sz5+ze==len&&ze>0)return -1;

    ll five=v5[0];
    ll ans=0;
    for(ll i=five;i<len-1;i++)
    {
        swap(str[i],str[i+1]);
        ans++;
    }
    ll two=v2[0];
    if(two>five)
        two--;

    for(ll i=two;i<len-2;i++)
    {
        swap(str[i],str[i+1]);
        ans++;
    }
    ll now=0;
    while(str[now]=='0')
    {
        ans++;
        now++;
    }
    return ans;

}
ll ase4(string str)
{
    ll len=str.size();
    vector<ll>v7;
    vector<ll>v5;
    ll ze=0;
    for(ll i=len-1;i>=0;i--)
    {
        if(str[i]=='7')v7.pb(i);
        if(str[i]=='5')v5.pb(i);
        if(str[i]=='0')ze++;
    }
    ll sz7=v7.size();
    ll sz5=v5.size();
    if(sz7==0||sz5==0)return -1;
    if(sz7==1&&sz5==1&&sz7+sz5+ze==len&&ze>0)return -1;

    ll five=v5[0];
    ll ans=0;
    for(ll i=five;i<len-1;i++)
    {
        swap(str[i],str[i+1]);
        ans++;
    }
    ll two=v7[0];
    if(two>five)
        two--;

    for(ll i=two;i<len-2;i++)
    {
        swap(str[i],str[i+1]);
        ans++;
    }
    ll now=0;
    while(str[now]=='0')
    {
        ans++;
        now++;
    }
    return ans;

}
int main()
{
    string str;
    cin>>str;
    bool c1=check(str);
    if(c1)
    {
        cout<<0<<endl;
        return 0;
    }
    ll ans=100000;
    ll mx1=ase1(str);
    if(mx1!=-1)ans=min(ans,mx1);
    ll mx2=ase2(str);
    if(mx2!=-1)ans=min(ans,mx2);
    ll mx3=ase3(str);
    if(mx3!=-1)ans=min(ans,mx3);
    ll mx4=ase4(str);
    if(mx4!=-1)ans=min(ans,mx4);

    if(ans==100000)
        ans=-1;

    cout<<ans<<endl;

    return 0;
}
