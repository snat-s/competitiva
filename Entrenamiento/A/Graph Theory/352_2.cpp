#include <iostream>
#include <utility>
#include <vector>
std::pair<int, int> directions[] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1},
                                    {0, 1},   {1, 1},  {1, 0},  {1, -1}};
bool visited[30][30];

void dfs(int i, int j, int n, std::vector<std::vector<int>> &adj) {
	if(visited[i][j])
		return;
	visited[i][j] = true;
	for(int k = 0; k < 8; k++) {
		int a = directions[k].first + i;
		int b = directions[k].second + j;
		if(a < n && b < n && a >=0 && b >= 0 &&
			 adj[a][b] == '1') {
			dfs(a,b,n,adj);
		}
	}
}
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
	int n = 0;
	while (std::cin>> n) {
		std::vector<std::vector<int>>adj;
		//std::vector<std::vector<bool>> visited[n][n];
		int ans = 0;
		for (int i = 0; i < n; i++) {
			std::vector<int> aux(n);
			for(int j = 0; j<n; ++j) {
				std::cin >> aux[j];
			}
			adj.push_back(aux);
		}
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				std::cout << adj[i][j];
			}
			std::cout <<  "\n";
		}
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				if(!visited[i][j] && adj[i][j] == '1') {
					dfs(i, j, n, adj);
					ans++;
				}
			}
		}
		std::cout << ans << "\n";
	}

  return 0;
}
