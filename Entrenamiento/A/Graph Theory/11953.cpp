#include <cstddef>
#include <iostream>
#include <cstring>
#include <utility>

char tablero[100][100];
bool visited[100][100];
std::pair<int, int> directions[] = {
  {-1,0},
  {0,-1},
  {1,0},
  {0,1}
};
bool dfs(int n, int i, int j, bool isSinked) {
  if(visited[i][j]) {
    return isSinked;
  }
  visited[i][j] = true;

  for (int k = 0; k < 4; ++k) {
    int x = i + directions[k].first;
    int y = j + directions[k].second;
    if (x < n && y < n && x >=0 && y >= 0 &&
	tablero[x][y]=='x' && visited[x][y] != true) {
      isSinked = false;
      dfs(n, i, j, isSinked);
    }
    if (x < n && y < n && x >= 0 && y >= 0 && tablero[x][y] == '@' &&
        visited[x][y] != true) {
      dfs(n, i, j, isSinked);
    }
  }
  return isSinked;
}

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int t = 0;
  std::cin >> t;
  for(int k = 0; k < t; k++){
    int n = 0, ans = 0;
    std::cin >> n;
    memset(visited, false, sizeof(visited));
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
	std::cin >> tablero[i][j];
      }
    }
    
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
	if (visited[i][j]!= true && tablero[i][j] == 'x') {
	  if(!dfs(n, i, j, false))
	    ans++;
	}
      }
    }
    std::cout << "Case " << k+1 << ": "<< ans << "\n";

  }
  return 0;
}
