#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, counter = 0, counterElse = 0;
  std::cin >> n;
  char mat[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
     std::cin >> mat[i][j]; 
    }
  }
  bool isPossible =  mat[0][n-1] == mat[0][0] && mat[n-1][0] == mat[0][0]  && mat[n-1][n-1] == mat[0][0];
  if (isPossible) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
	if (((i+j) == n-1 || i == j ) && mat[i][j] == mat[0][0]) {
	  counter++;
	} else {
	  if (mat[0][1] == mat[i][j] && mat[0][1] != mat[0][0]) {
	    counterElse++;
	  }
	}
      }
    }
  }
  

  if (counter == (n*2)-1 && (counter+counterElse == n*n) && isPossible) {
        std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }
  return 0;
}
