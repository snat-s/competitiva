#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {

  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, aux = 1, w = 0;
  std::vector<int> students;

  n  = 0;
  std::cin >> n;
  int t[n], a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> t[i];
    a[i] = t[i];
  }
  std::sort(t,t+n);
  while (cont < n) {
    for (int i = 0; i < n; i++) {
      if (t[i] == -1 || aux != t[i]) {
	cont++;
	continue;
      } else if (t[i] == aux) {
	t[i] = -1;
	aux++;
	if (aux == 4) {
	  w++;
	  aux = 1;
	}
      }
    }
    
  }
  return 0;
}
