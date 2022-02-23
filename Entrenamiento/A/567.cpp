#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
// TLE
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n = 0, max = 0, min = 0;
  std::cin >> n;
  std::vector<int> x(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> x[i];
  }
  for(int j = 0; j < n; ++j) {
    max = -2147483648;
    min =  2147483647;
    for (int i = 0; i < n; ++i) {
      if(i != j){
	max = std::max(max, abs(x[j]-x[i]));
	min = std::min(min, abs(x[j]-x[i]));
      }
    }
    std::cout << min << " " << max << "\n";
  }
  return 0;
}
