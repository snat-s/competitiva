#include <iostream>
#include <queue>
#include <utility>
std::pair<int, int> direction[] = {
  {-1,0},
  {0,-1},
  {0,1},
  {1,0}  
};
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int t;
  std::cin >> t;
  for(int k = 0; k < t; k++) {
    int n, ans = 0;
    std::cin >> n;
    bool visited[n][n];
    char tablero[n][n];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
	std::cin >> tablero[i][j];
	visited[i][j] = false;
      }
    }

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
	if (tablero[i][j] == 'x' && !visited[i][j]) {
	  
	  std::queue<std::pair<int, int>> q;
	  q.push({i,j});
	  visited[i][j] = true;

	  while (!q.empty()) {

	    auto coordenadas = q.front();

            for (int l = 0; l < 4; l++) {
	      int x = coordenadas.first + direction[l].first;
	      int y = coordenadas.second + direction[l].second;
	      if (x >= 0 && x < n && y >= 0 && y < n &&
		  !visited[x][y] &&
		  (tablero[x][y] =='x' || tablero[x][y] == '@')) {
		q.push({x,y});
		visited[x][y] = true;
	      }
	    }
	    q.pop();
	  }
	  ans++;
	}
      }
    }
    std::cout << "Case " << k+1 << ": " << ans << "\n";

  }
  return 0;
}
