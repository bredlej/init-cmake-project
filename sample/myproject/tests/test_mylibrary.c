#include <myproject/mylibrary.h>
#include <unity.h>

void setUp(void) {}
void tearDown(void) {}

void test_Should_Run_Library_Function()
{
	TEST_ASSERT_TRUE_MESSAGE(1 == my_library_function(), "Wrong initial function result of library mylibrary.");
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_Should_Run_Library_Function);
	return UNITY_END();
}
