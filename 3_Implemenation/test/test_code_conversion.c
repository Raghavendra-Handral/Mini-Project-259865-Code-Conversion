#include "code_conversion"
#include "unity.h"

static b;
static complex_t c2 = {0, 0};
static complex_t result = {0, 0};
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
    
    TEST_ASSERT_EQUAL(10, b2d(&b));
    b=10;
    TEST_ASSERT_EQUAL(1010, d2b(&b));
    TEST_ASSERT_EQUAL(11, b2g(&b));
    
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
