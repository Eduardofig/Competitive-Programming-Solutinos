#include <bits/stdc++.h>
 
using namespace std;
 
using ui = unsigned int;
using l = long;
using ul = unsigned long;
using ll = long long;
using ull = unsigned long long;
 
const int MXN = 2e5 + 3;
const int INF = 0x3f3f3f3f;
const int MOD = 1e7 + 9;

int n;
int k;
int a[MXN];
//int b[MXN];
//string s;
 
void solve()
{
    for(int i = 1; i < n; ++i) {
        if(abs(a[i] - a[i - 1]) >= 2) {
            cout << "YES\n" << i << ' ' << i + 1 << '\n';
            return;
        }
    }

    cout << "NO\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        solve();
    }
}