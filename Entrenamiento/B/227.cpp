#include <iostream>
#include <map>
#include <utility>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, m;
  std::cin >> n;
  std::map<int, std::pair<int, int>> ans;
  int a;
  for (int i = 1; i <= n; ++i) {
    std::cin >> a;
    ans[a] = std::make_pair(i, n+1-i);
  }

  std::cin >> m;
  int q;
  unsigned long long vasya = 0, petya = 0;
  for (int i = 0; i < m; ++i) {
    std::cin >> q;
    vasya+=ans[q].first;
    petya+=ans[q].second;
  }
  std::cout << vasya << " " << petya << "\n";
  return 0;
}
