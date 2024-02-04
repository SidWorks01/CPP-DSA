#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void Solve(){
  long long n,f,a,b;
  cin>>n>>f>>a>>b;
  vector <long long> v(n);
  for (auto &i : v) cin >> i;
  long long previous=0;
  long long minn=0;
  for (int i =0;i<n;i++){
    minn=min((v[i]-previous)*a,b);
    f-=minn;
    previous= v[i];
  }
  if (f>0){
    cout<<"YES\n";
  }
  else cout<<"NO\n";

}
int main(){
  Fast_IO();
  int t;
  cin >> t ;
  while (t--){
    Solve();
  }
  return 0;

}