#include <cstdio>
#include <iostream>
class Road {
public:
	double lenght;
	int width;
};
int main() {
	Road road;
	std::cout << "Length of the road: " << std::endl;
	std::cin >> road.lenght;
	std::cout << "Width of the road: " << std::endl;
	std::cin >> road.width;
	std::cout << "Length of the road: " << road.lenght << std::endl;
	std::cout << "Width of the road: " << road.width << std::endl;
	return 0;
}

