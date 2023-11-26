
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


void display(vector<string>&v){
  for(ll i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
}
void solve()
{
  ll n;
  cin>>n;
  vector<string>v={"0","1"};
  if(n==1){
    display(v);
    return;
  }
  n--;
  while(n--){
    ll sz=v.size();
    for(ll i=sz-1;i>=0;i--){
      v.push_back(v[i]);
    }
    for(ll i=0;i<v.size();i++){
      if(i<v.size()/2){
        v[i]="0"+v[i];
      }
      else{
        v[i]="1"+v[i];
      }
    }
  }
  display(v);
    
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
