#include <bits/stdc++.h>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int t =0 ;
  std::cin >> t;
  while (t--) {
    int n = 0;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      std::cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());
    for (int i = 1; i < n-1; ++i) {
      std::swap(arr[i], arr[i+1]);
    }
    for (auto a : arr) {
      std::cout << a << " ";
    }

    std::cout << "\n";
  }
  return 0;
}
