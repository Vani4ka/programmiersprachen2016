#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int gcd(int a, int b) {
	if(a!=0 && b!=0) {
		if(a<b) {
			int temp;
			temp=b;
			b=a;
			a=temp;
		}
		int rest;
		do
		{
			rest=a%b;
			a=b;
			b=rest;
		} while (rest>0);
		return a;
	}
	else std::cout<<"Some of the numbers is 0"<<std::endl;
}

int checksum(int num) {
	int sum=0;
	do {
		sum+=num%10;
		num=num/10;
	} while (num>0);
	return sum;
}

int sumMultiples() {
	int sum=0;
	for (int i = 1; i <= 1000; ++i)
	{
		if (i%3==0 || i%5==0) {
			sum+=i;
		}
	}
	std::cout<<"HERE:"<<sum<<std::endl;
	return sum;
}

TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(6,9) == 3);
	REQUIRE(gcd(3,7) == 1);
}

TEST_CASE("describe_checksum", "[checksum]")
{
	REQUIRE(checksum(113760) == 18);
	REQUIRE(checksum(12345) == 15);
}

TEST_CASE("describe_sumMultiples", "[sumMultiples]")
{
	REQUIRE(sumMultiples() == 234168);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}

double miletokm(double m) {
	return m*1.609344;
}

TEST_CASE("describe_miletokm", "[miletokm]")
{
	REQUIRE(miletokm(1) == 1.609344);
}