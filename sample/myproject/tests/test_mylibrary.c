#include <myproject/mylibrary.h>
#include <unity.h>

void setUp(void) {}
void tearDown(void) {}

void test_Should_Run()
{
	TEST_ASSERT_TRUE_MESSAGE(1 == my_library_function(), "mylibrary not recognized as project library.");
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_Should_Run);
	return UNITY_END();
}
