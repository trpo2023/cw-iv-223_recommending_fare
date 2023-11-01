#include "../src/libtrpo/command.h"
#include "../src/libtrpo/opr.h"
#include "../thirdparty/ctest.h"

CTEST(opr, opr2_test_1)
{
    int s = 1;
    int expected = 10;
    int result = opr2(s);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr2_test_2)
{
    int s = 2;
    int expected = 20;
    int result = opr2(s);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr2_test_3)
{
    int s = 3;
    int expected = 30;
    int result = opr2(s);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr2_test_4)
{
    int s = 4;
    int expected = 40;
    int result = opr2(s);
    ASSERT_EQUAL(expected, result);
}
//===============================================================================================================================
CTEST(opr, opr3_test_1)
{
    int m = 1;
    int expected = m;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_2)
{
    int m = 2;
    int expected = m;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_3)
{
    int m = 3;
    int expected = m;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_4)
{
    int m = 4;
    int expected = m;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_5)
{
    int m = 5;
    int expected = m;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}
