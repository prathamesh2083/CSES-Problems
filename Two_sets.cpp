
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
    ll sum = n * (n + 1) / 2;  // calculate total sum from 1 to n

    if (sum % 2 == 1)
    {
        cout << "NO" << endl;  // if sum id odd then print NO
        return;
    }
   
    vector<ll> s1, s2;
    ll tmp = sum;
    while (n > 0)
    {
        if (tmp - n >= (sum / 2))
        {
            tmp -= n;
            s1.push_back(n);
        }
        else
        {
            s2.push_back(n);
        }
        n--;
    }
    cout << "YES" << endl;
    cout << s1.size() << endl;
    for (ll i = 0; i < s1.size(); i++)
    {
        cout << s1[i] << " ";
    }
    cout << endl;
    cout << s2.size() << endl;
    for (ll i = 0; i < s2.size(); i++)
    {
        cout << s2[i] << " ";
    }
    cout << endl;
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
