#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int t, n, m;
  std::cin >> t;
  while (t--) {
    std::vector<std::string> res;
    std::cin >> n >> m;
    char mat[n][m];
    std::pair<int, int> indie_position;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        std::cin >> mat[i][j];
        if (mat[i][j] == '@') {
          indie_position.first = i;
          indie_position.second = j;
        }
      }
    }
    int i = indie_position.first, j = indie_position.second, k = 0;

    std::pair<int, int> further_position[] = {{-1, 0}, {0, j + 1}, {0, j - 1}};

    while (mat[i][j] != '#') {
      bool temp = false;

      switch (mat[i][j]) {
      case 'I':
        temp = true;
        break;
      case 'E':
        temp = true;
        break;
      case 'H':
        temp = true;
        break;
      case 'O':
        temp = true;
        break;
      case 'V':
        temp = true;
        break;
      case 'A':
        temp = true;
        break;
      }
      if (temp) {
        switch (k) {
        case 0:
          res.push_back("forth");
          break;
        case 1:
          res.push_back("right");
          break;
        case 2:
          res.push_back("left");
          break;
        }
      }
      if (k == 2) {
        k = 0;
        continue;
      }
      i += further_position[k].first;
      j += further_position[k].second;
      k++;
    }

    for (int i = 0; i < res.size(); i++) {
      std::cout << res[i] << "\n";
    }
    return 0;
  }
}
