#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n = 0;
  std::cin >> n;
  std::vector<int>a(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  std::sort(a.begin(), a.end());
  int maxSum = 0;
  maxSum = std::accumulate(a.begin(), a.end(), maxSum);
  int currentSum = 0, sol = 0;
  std::cout << "Max Sum" << maxSum << "\n";

  for (int i = 0, j = a.size()-1; i < n; ++i) {
    std::cout << "Target sum: " << maxSum/2  << "\n";


    currentSum += a[j];
    sol++;
    std::cout << "Current Sum: " << currentSum << "\n";
    if (currentSum > (maxSum/2)) {
      std::cout << sol << "\n";
      return 0;
    }
    currentSum+=a[i];
    sol++;
    std::cout << "Current Sum: " << currentSum << "\n";
    if (currentSum > (maxSum/2)) {
      std::cout << sol << "\n";
      return 0;
    }
  }
  std::cout << sol << "\n";
  return 0;
}
