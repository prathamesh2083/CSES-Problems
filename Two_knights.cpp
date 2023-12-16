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
  cin >> n;
  for (ll i = 1; i <= n; i++)
  {
    cout << (i * i) * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << endl;
  }
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
