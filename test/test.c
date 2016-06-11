#include "ctest.h"
#include "library.h"

CTEST(test_suite, NO_ROOTS_test)
{
	const float a = 5, b = 4, c = 3; //задаем переменные
	float x1, x2;     //указываем что иксы такого же типа 
	const int expected_root_number = 0,//указываем что нет корней 
		test = solve(a, b, c, &x1, &x2);  //запускаем тест
	ASSERT_EQUAL(expected_root_number, test);
}

CTEST(test_suite, ROOTS_NULL_test)
{
	const float a = 2, b = 4, c = 2;   //указываем переменные

	const int test = solve(a, b, c, NULL, NULL),   
		expected_root_number = -1;

	ASSERT_EQUAL(expected_root_number, test);
}

CTEST(test_suite, ONE_ROOTS_test)
{
	const float a = 2, b = 4, c = 2,
		expected_x1 = -4.000;
	float x1, x2;
	const int test = solve(a, b, c, &x1, &x2),
		expected_root_number = 1;

	ASSERT_EQUAL(expected_root_number, test);
	ASSERT_DBL_NEAR(expected_x1, x1);
}

CTEST(test_suite, TWO_ROOTS_test)
{
	const float a = 3, b = 7, c = 2,
		expected_x1 = -2.000,
		expected_x2 = -1.0/3.0;
	float x1, x2;
	const int test = solve(a, b, c, &x1, &x2),
		expected_root_number = 2;

	ASSERT_EQUAL(expected_root_number, test);
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}
