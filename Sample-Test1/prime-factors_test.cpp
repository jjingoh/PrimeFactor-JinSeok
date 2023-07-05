#include "pch.h"
#include "../Project10/prime-factors.cpp"
#include <vector>

using namespace std;

TEST(PrimeFactors, PrimeTest) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}