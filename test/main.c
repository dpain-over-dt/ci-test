#define CTEST_MAIN

#include <ctest.h>

int sum(int a, int b) { return a + b; }

CTEST(arithmetic_suite, simple_sum)
{
    // Given
    const int a = 1;
    const int b = 2;

    // When
    const int result = sum(a, b);

    // Then
    const int expected = 3;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
