#include <vector>
class UnionByRank {
private:
  std::vector<int>root;
  std::vector<int>rank;

public:
  UnionByRank(int size) : root(size), rank(size) {
    for (int i = 0; i < size; i++) {
      root[i] = i;
      rank[i] = 1;
    }
  }
  int find(int x) {
    while (x != rank[x]) {
      x = rank[x];
    }
    return x;
  }
  void Union(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if(rootX != rootY) {
      if(rank[rootX] > rank[rootY]) {
	root[rootY] = rootX;
      }
      else if(rank[rootX] < rank[rootY]) {
	root[rootX] = rootY;
      }
      else {
	rank[rootX]++;
	root[rootY] = root[rootX];
      }
    }
  }
    bool connected(int x, int y) {
      return find(x) == find(y);
    }
};
