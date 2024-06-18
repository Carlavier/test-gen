#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define FOR(i, n) for(int i = 0; i < n; i++)
#define FORN(i, n) for(int i = 0; i <= n; i++)
#define FOR1(i, n) for(int i = 1; i <= n; i++)
#define ll long long
#define pb push_back

int x, res, n;

void solve() {
    cin >> n;
    for(int i = 0; i < 2 * n - 1; i++) {
        cin >> x;
        res ^= x;
    }
    cout << res;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
}