#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll arr[105];
int main()
{
    ll n;
    cin>>n;
    n=n*2;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans=0;
    for(ll i=0;i<n;i+=2)
    {
        ll id;
        for(ll j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                id=j;
                break;
            }
        }
        //cout<<id<<endl;
        while(id!=i+1)
        {
            swap(arr[id-1],arr[id]);
            ans++;
            id--;
        }
    }

    cout<<ans<<endl;
    //main();
    return 0;
}
