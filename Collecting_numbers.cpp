#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  map<ll, ll> mp;
  ll cnt = 0;

  for (ll i = 0; i < n; i++)
  {
    mp[v[i]] = i;
  }
  ll ind = mp[1];
  cnt = 1;
  // cout<<ind<<" ";
  for (ll i = 2; i <= n; i++)
  {
    // cout << ind << " ";
    if (mp[i] < ind)
    {
      ind = mp[i];
      cnt++;
    }
    else
    {
      ind = mp[i];
    }
  }
  cout << cnt << endl;
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
