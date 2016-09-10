#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

double miletokm(double m) {
	return m*1.609344;
}

int main(int argc, char* argv[])
{
	double mile;
	std::cout<<"Enter your mile(s): ";
	std::cin>>mile;
	std::cout<<mile<<" miles are "<<miletokm(mile)<<"km"<<std::endl;

	return 0;
}
