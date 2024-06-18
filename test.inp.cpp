// #include"testlib.h"
#include<bits/stdc++.h>
using namespace std;

#define ll long long

mt19937_64 rng(static_cast<long long>(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count()));
long long Rand(long long l, long long r) { return uniform_int_distribution<long long>(l, r)(rng); }

int main(int argc, char** argv) {
    // registerGen(argc, argv);
    freopen(argv[1], "w", stdout);

    cout << Rand(1, 1e18) << " " << Rand(1, 1e2) << " " << Rand(1, 1e2);
}
