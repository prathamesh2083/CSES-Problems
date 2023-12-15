#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void takeinput(vector<ll> &v, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll i=0,j=n-1;
    ll cnt=0;
    while(i<j){
        
       if(v[i]+v[j]<=k){
        cnt++;
        i++;
        j--;
       }
       else{
        cnt++;
        j--;
       }
    }
    if(i==j){
        cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t;
    // cin >> t ;
    // while (t--)
    solve();

    return 0;
}
