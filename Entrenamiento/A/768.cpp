#include <algorithm>
#include <iostream>
#include <vector>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n = 0, res = 0;
  std::cin >> n;
  std::vector<int> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  std::sort(a.begin(), a.end());

  for (int i = 1; i < n-1; i++) {
    if (a[0] < a[i] && a[i] < a[a.size()-1]) {
      res++;
    }
  }
  std::cout << res << "\n";

  return 0;
}
