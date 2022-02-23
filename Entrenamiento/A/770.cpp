#include <iostream>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, k;
  char x = 'a';
  std::cin >> n >> k;
  int a = n/k, b = n%k;
 

  for (int i = 0; i < a; i++) {
    x = 'a';
    for (int j = 0; j < k; j++) {
      std::cout << x;
      x++;
      if (x == '{') {
	x ='a';
      }
    }
  }
    x = 'a';
  for (int i = 0; i < b; i++) {
    std::cout << x;

    x++;
    if (x == '{') {
      x ='a';
    }
  }
  std::cout << "\n";

  return 0;
}
