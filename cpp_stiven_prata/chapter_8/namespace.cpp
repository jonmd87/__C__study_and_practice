#include <iostream>

namespace my{
	double a;
	double b;
	int	  c;
	};
double a = 1;	
int				main(void)
{
	std::cout << "enter val:\n";
	using namespace my;
	std::cin >> ::a;
	std::cout << "my a = " << my::a << std::endl;
	std::cout << "a = " << ::a << std::endl;
	using namespace my;
	std::cout << "my a = " << my::a << std::endl;
	return (0);
}