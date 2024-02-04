#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void Solve(){
  int n;
  cin>>n;
  vector <pair<ll,ll>> v(n);
  for (auto &i:v) cin>>i.first >> i.second;
  ll ans, count_3=0;
  ll top=0,low=0;
  for (int i=0;i<n;i++){
    if (v[i].first==1){
      low = max(low,v[i].second);
    }
    if (v[i].first==2){

      top = v[i].second;
      if (top>v[i].second) top = v[i].second;
    }
    else continue;
  }
  for (int i=0;i<n;i++){
    if (v[i].first==3 && v[i].second<=top && v[i].second>=low) count_3++;
    else continue;
  }
  ans = top +1 -low -count_3;
  if (ans>0) cout<<ans<<endl;
  else cout<<0<<endl;
}

int main(){
    Fast_IO();
    int t = 1;
    cin >> t;
    while(t--)
        Solve();
    return 0;
}