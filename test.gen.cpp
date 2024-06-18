// #include"testlib.h"
#include<bits/stdc++.h>
using namespace std;

#define ll long long

mt19937_64 rng(static_cast<long long>(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count()));
long long Rand(long long l, long long r) { return uniform_int_distribution<long long>(l, r)(rng); }

ll n, a[100005], q, x[100005];

void gen(char* ip) {
    freopen(ip, "w", stdout);

    n = Rand(5e2, 1e3);
    for (int i = 1; i <= n; ++i) a[i] = Rand(1, 1e9);
    q = Rand(5e2, 1e3);
    for (int i = 1; i <= q; ++i) {
        bool ok = Rand(0, 1);
        if (ok) x[i] = a[Rand(1, n)];
        else x[i] = Rand(1, 1e9);
    }
    // n = Rand(3, 5);
    // for (int i = 1; i <= n; ++i) a[i] = Rand(1, 9);
    // q = Rand(1, 5);
    // for (int i = 1; i <= q; ++i) {
    //     bool ok = Rand(0, 1);
    //     if (ok) x[i] = a[Rand(1, n)];
    //     else x[i] = Rand(1, 1e9);
    // }

    // cout << n << "\n";
    // for (int i = 1; i <= n; ++i) cout << a[i] << " ";

    cout << n << "\n" << a[1];
    for (int i = 2; i <= n; ++i) cout << " " << a[i];
    cout << "\n" << q << "\n" << x[1];
    for (int i = 2; i <= q; ++i) cout << "\n" << x[i];
}

bool check(ll val) {
    ll l = 1, r = n, m;
    while (l <= r) {
        // cout << l << " " << r << "\n";
        m = (l + r) / 2;
        if (a[m] == val) return 1;
        if (a[m] < val) l = m + 1;
        else r = m - 1;
    }
    return 0;
}

void solve(char* op) {
    freopen(op, "w", stdout);

    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= q; ++i) {
        // cout << x[i] << " ";
        if (check(x[i])) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(int argc, char** argv) {
    // registerGen(argc, argv);
    // freopen(argv[1], "w", stdout);

    gen(argv[1]);
    solve(argv[2]);
}
