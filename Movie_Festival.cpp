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
bool cmp(vector<ll> &v1, vector<ll> &v2)
{
    return v2[1] > v1[1]; // sorting intervals according to endi
}
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), cmp);
    ll start = v[0][0], end = v[0][1];
    ll ans = 1;
    for (ll i = 1; i < n; i++)
    {
        if (end <= v[i][0])
        {
            start = v[i][0];
            end = v[i][1];
            ans++;
        }
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
