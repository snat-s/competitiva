#include <algorithm>
#include <vector>
#include <iostream>
#include <utility>
bool sortBySecond(const std::pair<int, int> &a,const std::pair<int, int> &b) {
  return (a.second > b.second);
}
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, m;
  long long ans = 0;
  std::cin >> n >> m;
  std::vector<std::pair<int, int>> matches(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> matches[i].first >> matches[i].second;
  }
  std::sort(matches.begin(),matches.end(),sortBySecond);

  for (int i = 0,j = 0; j < n && i < m;) {
   

    if (j+matches[i].first < n && matches[i].first != 0) {
      ans+=(matches[i].second*matches[i].first);
      j+=matches[i].first;
      i++;
    } else {
      if (matches[i].first == 0) {
	i++;
      }
      while (matches[i].first && j < n) {
	ans+= matches[i].second;
	matches[i].first--;
        j++;
      }
      i++;
    }
  }

  std::cout << ans << "\n";

  return 0;
}
