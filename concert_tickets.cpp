#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n), p(k);
  map<ll, ll> mp;
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
    mp[v[i]]++;
  }

  for (ll i = 0; i < k; i++)
  {
    cin >> p[i];
    if (mp.size() == 0)
    {

      cout << -1 << endl;
      continue;
    }
    auto it = mp.lower_bound(p[i]);

    if (it != mp.end())
    {

      if (it == mp.begin())
      {
        if (it->first == p[i])
        {

          cout << p[i] << endl;
          it->second--;
          if (it->second == 0)
          {
            mp.erase(it);
          }
        }
        else
        {

          cout << -1 << endl;
        }
        continue;
      }

      if (it->first == p[i])
      {

        cout << p[i] << endl;
        it->second--;
        if (it->second == 0)
        {
          mp.erase(it);
        }
      }
      else
      {
        if (mp.size() == 1)
        {

          cout << -1 << endl;
        }
        else
        {
          it--;

          cout << it->first << endl;
          it->second--;
          if (it->second == 0)
          {
            mp.erase(it);
          }
        }
      }
    }
    else
    {
      it--;

      cout << it->first << endl;
      it->second--;
      if (it->second == 0)
      {
        mp.erase(it);
      }
    }
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
