#include<iostream>
using namespace std;
long long n, a, b;
int main(int argc, char** argv) {
    freopen(argv[1], "r", stdin); freopen(argv[2], "w", stdout);
    cin >> n >> a >> b;
    if (b > a) a = b;
    cout << n / a + !!(n % a);
}