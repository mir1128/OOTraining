#include <cmath>
#include "gtest.h"

bool floatEqual(float left, float right) {
    return std::fabs(left - right) < 0.0001;
}

TEST(taxiSpec, should_return_correct_charge)
{
    float fee = chargeTaxiFee(1);
    ASSERT_TRUE(floatEqual(fee, 0.8));
}


