#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);

  int n, a, ans = 0;
  std::cin >> n >> a;
  int t[n+1];
  int distance = a-1;
  for (int i = 1; i <= n; ++i) {
    std::cin >> t[i];
  }
  for (int i = a; i <= n; i+=distance) {
    if (t[i]) {
      t[i] = 0;
      ans++;
    }
  }
  for (int i = a; i >= 1; i-=distance) {
    if (t[i]) {
      t[i] = 0;
      ans++;
    }
  }
  std::cout << ans << "\n";

  return 0;
}
