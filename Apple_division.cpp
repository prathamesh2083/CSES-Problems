
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
ll find(vector<ll>&v,ll g1,ll g2,ll i){

  if(i>=v.size()){
     return abs(g1-g2);
  }

  return min(find(v,g1+v[i],g2,i+1),find(v,g1,g2+v[i],i+1));
  

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
   cout<<find(v,0,0,0)<<endl;
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // ll t;
  // cin >> t;
  // while (t--)
  solve();

  return 0;
}
