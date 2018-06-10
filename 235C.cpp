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
    ll ze,on;
    sc2(ze,on);
    if(ze>on+1 || on>(ze+1)*2)
    {
        cout<<-1<<endl;
        return 0;
    }
    while(ze>0&&on>0)
    {
        ll now=on/ze;
        now=min(now,(ll)2);
        while(now--){
            cout<<1;
            on--;
        }
        cout<<0;
        ze--;
    }
    while(ze>0)
    {
        cout<<0;
        ze--;
    }
    while(on>0)
    {
        cout<<1;
        on--;
    }
    cout<<"\n";
    main();
    return 0;
}
