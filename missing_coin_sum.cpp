
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
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   if(v[0]!=1){
    cout<<1<<endl;
    return;
   }


   ll sum=0;
   for(ll i=0;i<n-1;i++){
      sum+=v[i];
      if(v[i+1]>sum+1){
        cout<<sum+1<<endl;
       
        return;
      }
   }
   sum+=v[n-1];
   cout<<sum+1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
        solve();

    return 0;
}
