/*
	https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1393
	Status: AC
 */
#include <iostream>
#include <utility>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, m, t;
  std::cin >> t;
  while (t--) {
    std::cin >> m >> n;
    int x, y;
    char grid[m][n];

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        std::cin >> grid[i][j];
        if (grid[i][j] == '@') {
          x = i;
          y = j;
        }
      }
    }
    char current = '@';
    int k = 0;
    char letters[] = {'I', 'E', 'H', 'O', 'V', 'A', '#'};
    std::pair<int, int> movements[] = {{0, -1},  // left
                                       {0, 1},   // right
                                       {-1, 0}}; // forward

    while (k < 7) {
      for (int i = 0; i < 3; ++i) {
        if (k < 7 && y+movements[i].second < n && x+movements[i].first < m &&
            grid[x + movements[i].first][y + movements[i].second] ==
            letters[k]) {
          current = letters[k];
          x += movements[i].first;
          y += movements[i].second;
          k++;
          switch (i) {
          case 0:
						std::cout << "left";
            break;
          case 1:
						std::cout << "right";
            break;
          case 2:
						std::cout <<"forth";
            break;
          }
					if(k < 7) {
						std::cout << " ";
					}
        }
      }
    }
    std::cout << "\n";
  }
  return 0;
}
