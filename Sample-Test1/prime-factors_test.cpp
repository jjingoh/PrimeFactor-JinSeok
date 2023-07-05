#include "pch.h"
#include "../Project10/prime-factors.cpp"
#include <vector>

using namespace std;

TEST(PrimeFactors, PrimeTest) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}