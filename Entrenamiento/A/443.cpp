#include <iostream>
#include <set>
#include <string>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  std::set<char> letras;
  std::string arreglo;
  std::getline(std::cin, arreglo);
  for (int i = 0; i < arreglo.size(); i++) {
    if(arreglo[i] == '}') {
      if (arreglo[i-1] == '{') {
	break;
      }
      letras.insert(arreglo[i-1]);
      break;
    } else if (arreglo[i] == ','){
      letras.insert(arreglo[i-1]);
    }
  }

  std::cout << letras.size()<< "\n";

  return 0;
}
