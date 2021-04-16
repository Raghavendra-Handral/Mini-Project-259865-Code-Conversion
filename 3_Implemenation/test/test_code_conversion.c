#include "code_conversion.h"
#include "unity.h"
#include "unity_internals.h"

unsigned int b;

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test(void)
{
    // Can ommi the below intialization as it is done at the declaration time
    b=1010;
    
    TEST_ASSERT_EQUAL(10, b2d(1010));
    b=10;
    TEST_ASSERT_EQUAL(1010, d2b(10));
    TEST_ASSERT_EQUAL(11, b2g(10));
    
}



int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test);
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}
