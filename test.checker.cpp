#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll s, a, b;

int main(int argc, char** argv) {
  // input của bai
  FILE* i = fopen(argv[1], "r");
  fscanf(i, "%lld", &s);
  // output của user
  FILE* o = fopen(argv[2], "r");
  fscanf(o, "%lld%lld", &a, &b);

  // system error -> return -1;
  // wrong answer -> return 1;
  // AC           -> return 0;

  if (a < 1 || b < 1) return 1;
  if (a + b != s) return 1;
  return 0;
}