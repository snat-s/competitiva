#include <iostream>
int main(void)
{
  int n = 0, crime, police, action;
  action = crime = police = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> action;
    if(action == -1) {
  
      if(police == 0) {
	crime++;
	
      } else {
	police--;
      }
    } else {
      police+=action;
    }
  }
  std::cout << crime << "\n";

  return 0;
}
