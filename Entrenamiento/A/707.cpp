#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, m;
  std::cin >> n >> m;
  char mat[n][m];
  bool isColored = false;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      std::cin >> mat[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if (mat[i][j] == 'C' || mat[i][j] == 'Y' ||
	  mat[i][j] == 'M' ) {
	std::cout << "#Color\n";
	return 0;
      }
    }
  }

  std::cout << "#Black&White\n";

  return 0;
}
