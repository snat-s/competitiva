#include <iostream>
#include <utility>
#include <cstring>

char image[30][30];
bool visited[30][30];
std::pair<int, int> directions[] = {
  {-1,-1},
  {-1,0},
  {-1, 1},
  {0,-1},
  {0,1},
  {1,-1},
  {1,0},
  {1,1}
  };

void dfs(int n, int a,int b) {
  if (visited[a][b]) {
    return;
  }

  visited[a][b] = true;

  for (int k = 0; k < 8; ++k) {
    int i = directions[k].first + a;
    int j = directions[k].second + b;
    if(i < n && j < n && i >=0 && j >= 0 && // es opción posible
       image[i][j] == '1' && visited[i][j] != true) { // ver si es o no
      dfs(n, i, j);
    }
  }
}
int main(void) {
   std::cin.tie(0);
   std::ios_base::sync_with_stdio(0);

   int n = 0, sol = 0, t = 1;
  while (std::cin >> n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        std::cin >> image[i][j];
      }
    }

    memset(visited, 0, sizeof(visited));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (visited[i][j] != true && image[i][j] == '1') {
          dfs(n, i, j);
          sol++;
        }
      }
    }

    std::cout << "Image number " << t << " contains " << sol
              << " war eagles.\n";
    sol = 0;
    t++;
  }

  return 0;
}
