// Quick Find Disjointed set
class UnionFind {
private:
  std::vector<int> root;
public:
  UnionFind(int size) : root(size) {
    for (int i = 0; i < size; i++) {
      root[i] = i;
    }
  }
  //O(1)
  int find(int x) {
    return root[x];
  }
  void union(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if(rootX != rootY) {
      //O(n)
      for(int i = 0; i < root.size(); i++) {
	if(root[i] == rootY) {
	  root[i] = rootX;
	}
      }
    }
  }
  // O(1)
  boolean connected(int x, int y) {
    return find(x) == find(y);
  }
};
