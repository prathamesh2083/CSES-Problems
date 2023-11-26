
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
set<string>st;
void find(string s,string tmp){

  if(tmp.length()==s.length()){
    st.insert(tmp);
    return;
  }
  for(ll i=0;i<s.length();i++){
    if(s[i]=='#'){
      continue;
    }
    char ch=s[i];
    tmp+=s[i];
    s[i]='#';
    find(s,tmp);
    s[i]=ch;
    tmp.pop_back();
  }

}
void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    find(s,"");
    cout<<st.size()<<endl;

    for(auto x:st){
      cout<<x<<endl;
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
