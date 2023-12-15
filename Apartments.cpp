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
  ll n, k, gap;
  cin >> n >> k >> gap;

  vector<ll> cap(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> cap[i];
  }
  vector<ll> sizes(k);
  for (ll i = 0; i < k; i++)
  {
    cin >> sizes[i];
  }
  sort(sizes.begin(), sizes.end());
  sort(cap.begin(), cap.end());
  ll cnt = 0;
  ll i = n - 1, j = k - 1;
  while (i >= 0 && j >= 0)
  {
    if (abs(sizes[j] - cap[i]) <= gap)
    {
      i--;
      cnt++;
      j--;
    }
    else if (cap[i] > sizes[j])
    {
      i--;
    }
    else
    {
      j--;
    }
  }
  cout << cnt << endl;
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
