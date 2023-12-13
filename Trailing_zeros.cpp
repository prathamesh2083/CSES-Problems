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
    ll cnt = n / 5;
    ll d = 25;

    while (d <= n)
    {
        cnt += n / d;
        d *= 5;
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
