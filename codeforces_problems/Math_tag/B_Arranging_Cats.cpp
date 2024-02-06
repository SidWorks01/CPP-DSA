#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Fast_IO() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    #endif
}

void Solve (){
  int n;
  string s,f;
  cin>>n>>s>>f;
  int count=0;
  int ones_s=0,ones_f=0;
  for(int i=0;i<n;i++){
    if(s[i]=='1') ones_s++;
    if(f[i]=='1') ones_f++;
  }
  for (int i = 0; i < n; i++) {
    if (s[i] != f[i] && f[i] == '1') {
      count++;
    }

  }
  if (ones_s>ones_f){
   count+=ones_s-ones_f;
 }
  cout<<count<<endl;
}
int main(){
    Fast_IO();
    int t = 1;
    cin >> t;
    while(t--)
        Solve();
    return 0;
}