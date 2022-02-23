#include <iostream>
#include <set>
#include <iomanip>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);

  int step, mod;
  while (std::cin>>step>>mod) {
    std::set<int> numeros;    
    numeros.insert(0);
    int cantidad = numeros.size(), i = 0;

    while(true) {
      i = (i+step)%mod;
      numeros.insert(i);
      if (numeros.size() > cantidad) {
	cantidad++;
	if (cantidad == mod) {
	  std::cout << std::setw(10) << step << std::setw(10) << mod << "    Good Choice\n\n";
	  break;
	}
      }	else {
	std::cout << std::setw(10) << step << std::setw(10) << mod << "    Bad Choice\n\n";
	break;
      }      
    }
  }
  return 0;
}
