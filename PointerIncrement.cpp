#include <iostream>

int main() {

	int i[10];
	double d[5];

	int *ip = i;
	double *dp = d;


	std::cout << "ip = " << (long)ip << std::endl; 
	ip++;
	std::cout << "ip++...Now ip = " << (long)ip << std::endl;

	std::cout << "dp = " << (long)dp << std::endl; 
	dp++;
	std::cout << "dp++...Now dp = " << (long)dp << std::endl;
}
