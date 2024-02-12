#include <bits/stdc++.h>

using namespace std;

#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fill(vec, value) memset(vec, value, sizeof(vec));
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define mod_combine(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define Pair pair < int, int >
#define ll long long
#define ull unsigned long long
#define Mod  1'000'000'007
#define OO 2'000'000'000
#define EPS 1e-9
#define PI acos(-1)

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

bool check(vector < int >& vec){
    int ans=2023;
    for( int i=0; i<sz(vec);i++){
        ans/=vec[i];}
        if(ans==1 ||ans==7||ans==17||ans==119||ans==289||ans==2023) return true;
    return false;
}

void Solve(){
  int n ,k;
  cin>>n>>k;
  vector < int > vec(n);
  cin(vec);
  int ans=2023;
  //vector<int> factors={7,17,};
    if (check(vec)){
        for (int i=0;i<n;i++){
        ans/=vec[i];
        }
        cout<<"YES"<<endl;
        cout<<(ans)<<" ";
        for ( int i=1;i<k;i++)
            cout<<1<<" ";
        cout<<endl;
  }
    else cout<<"NO"<<endl;
}

int main(){
    Fast_IO();
    int t = 1;
    cin >> t;
    while(t--)
        Solve();
    return 0;
}