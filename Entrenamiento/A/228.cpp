#include <iostream>
#include <map>
#include <utility>
int main(void)
{
  int a = 0, res = 0;
  std::map<int, int> tenis;
 for (int i = 0; i < 4; ++i) {
   std::cin >> a;
   tenis[a]++;
 }
 for (std::pair<int, int> tipo : tenis) {
   if(tipo.second > 1) {
     res+= tipo.second-1;
   }
 }
 std::cout << res << "\n";

  return 0;
}
