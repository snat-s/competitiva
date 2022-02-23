#include <vector>
class PathCompressionOptimization {
private:
  std::vector<int> root;

public:
  PathCompressionOptimization(int size) : root(size), rank(size) {
    for (int i = 0; i < size; i++) {
      root[i] = i;
      rank[i] = 1;
    }
  }
  int find(int x) {
    if(x == root[x]) {
      return x;
    }
    return root[x] = find(root[x]);
  }
  // Se pueden hacer rankedUnions o se usa Quickunion, sólo cambia la velocidad con la que jala, es más rápido rankedunions
  /*  void RankedUnion(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if(rootX != rootY) {
      if(rank[rootX] > rank[rootY]) {
	root[rootY] = rootX;
      } else if (rank[rootX] > rank[rootY]) {
        root[rootX] = rootY;
      } else {
        root[rootX] = rootY;
	rank[rootX]++;
      }
    }
  }*/
  void quickUnion(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if(rootX != rootY) {
      root[rootY] = x;
    }
  } 
  bool connected(int x, int y) {
    return find(x) == find(y);
  }
};
