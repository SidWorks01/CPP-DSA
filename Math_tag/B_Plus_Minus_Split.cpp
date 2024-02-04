#include <bits/stdc++.h>

using namespace std;

void Solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int penalty = 0;
    int Count_Plus = 0;
    int Count_Minus = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '+') {
            Count_Plus++;
        } 
        else {
            Count_Minus++;
        }
    }
    penalty = abs(Count_Plus - Count_Minus);
    cout << penalty << endl;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--)
        Solve();
    return 0;
}