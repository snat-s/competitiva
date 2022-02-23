#include <algorithm>
#include <cstdlib>
#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, ans = 0, max = 0, currentEnergy = 0;
  std::cin >> n;
  int h[n+1];
  h[0] = 0;
  for (int i = 1; i <= n; ++i) {
    std::cin >> h[i]; 
  }
  currentEnergy = h[1];
  for (int i = 2; i <= n; ++i) {
    if (currentEnergy - h[i] < 0) {
      
    }
   
  }
  std::cout << ans << "\n";

  return 0;
}
/*
4-3 = 1

*/
