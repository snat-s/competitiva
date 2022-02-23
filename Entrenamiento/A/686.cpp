#include <iostream>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  long long n, x, dk ;
  n = x = dk = 0;
  std::cin >> n >> x;
  for (long long i = 0; i < n; i++) {
    char action;
    long long quantity;
    std::cin >> action >> quantity;
    switch (action) {
    case '+': x+=quantity;break;
    case '-': {
      if (x < quantity) {
	dk++;
      } else {
        x-=quantity;
      }
    }
    }
  }
  std::cout << x <<" " << dk << "\n";

  return 0;
}
