// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1047

#include <iostream>
#include <string>

int main(void)
{
    std::string x, y, answer;
    std::cin >> x >> y;
    int carry = 0;
    for (int i = 0; i < x.size(); i++) {
	for (int j = 0; j < y.size(); j++) {
	    int producto = (x[i]-'0') * (y[j]-'0');
	    if(carry>0) {
		producto+=carry;
		carry = 0;
	    }
	    if(producto>9) {
		carry = producto/10;
		std::cout << carry << " ";
	    } else {
		answer+=std::to_string(producto);
	    }
	}      
    }
    std::cout << answer<< "\n";
    return 0;
}
