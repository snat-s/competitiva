#include <bits/stdc++.h>
#include <vector>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n = 0;
  std::cin >> n;
  std::vector<int> p(n);
  std::vector<int> sol(n);
  for (int i = 0 ; i < n; ++i) {
    std::cin >> p[i];
  }
  for (int i = 0; i < n; ++i) {
    sol[p[i]-1] = i+1;
  }
  for (auto a : sol) {
    std::cout << a << " ";
  }
  std::cout <<  "\n";
  return 0;
}
