#include <iostream>

int main(void)
{
  int n, serenja, dima;
  serenja = dima = n = 0;
  std::cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  for (int k = 0, i = 0, j = n-1; i <= j;k++) {
    // std::cout << i << " " << j << '\n';
    if((k%2) == 0){
      if (a[i]>a[j]) {
	serenja+=a[i];
	i++;
      } else {
	serenja+=a[j];
	j--;
      }
    }
    else {
      if (a[i]>a[j]) {
	dima+=a[i];
	i++;
      } else{
	dima+=a[j];
	j--;
      } 
    }
    
    // std::cout << serenja << " " << dima << "\n";
  }
  std::cout << serenja << " " << dima << "\n";

  return 0;
}
