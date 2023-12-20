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
  ll a, b;
  map<ll, ll> mp;
  for (ll i = 0; i < n; i++)
  {
    cin >> a >> b;
    mp[a]++;
    mp[b + 1]--;
  }

  ll ans = 0;
  ll sum = 0;

  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    sum += it->second;

    ans = max(ans, sum);
  }
  cout << ans << endl;
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
