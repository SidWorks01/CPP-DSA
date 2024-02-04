#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void Solve(){
  int n;
  string s1,s2,s3;
  cin>>n>>s1>>s2>>s3;
  for (int i = 0; i < n; i++)
  {if ( s1[i]==s3[i] or s2[i]==s3[i])
  {
    cout<<"NO\n";
    break;
  }
  else
  {
    cout<<"YES\n";
    return;
  }

  }

}

int main(){
    Fast_IO();
    int t = 1;
    cin >> t;
    while(t--)
        Solve();
    return 0;
}