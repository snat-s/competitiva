#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n = 0, maxSize;
  std::cin >> n;
  maxSize = n;
  std::vector<int> arr(n);
  std::vector<bool> hasSize(n);
  std::set<int> temp;
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
    hasSize[i] = false;
  }
  for (int i = 0; i < n; ++i) {
    if (arr[i] == maxSize) {
      std::cout << maxSize << " ";
      maxSize--;
      while (temp.count(maxSize)) {
	std::cout << maxSize << " ";
	maxSize--;
      }
      std::cout << "\n";
    } else {
      std::cout << "\n";
      temp.insert(arr[i]);
    }
  }
  return 0;
}
