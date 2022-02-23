// https://codeforces.com/contest/66/problem/B
#include <algorithm>
#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, ans = 1;
  std::cin >> n;
  int a[n] = {};
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    int j = i, temp = 1;
    while (a[j] >= a[j-1] && j >= 1) {
      //std::cout <<a[j] <<" "<< a[j-1] << "\n";
      j--;
      temp++;
    }
    j = i;
    while (a[j]>=a[j+1] && j < n-1) {
      // std::cout <<a[j] <<" "<< a[j+1] << "\n";
      j++;
      temp++;
    }
    //std::cout << temp << "\n";

    ans = std::max(temp, ans);
  }
  std::cout << ans << "\n";

  return 0;
}
