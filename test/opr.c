#include <../thirdparty/ctest.h>
#include "../src/libtrpo/command.h"
#include "../src/libtrpo/opr.h"

CTEST(opr, opr1_test_1)
{
    int expected = 1;
    int result = opr1();
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr1_test_2)
{
    int expected = 2;
    int result = opr1();
    ASSERT_EQUAL(expected, result);
}
//=================================================================================================
CTEST(opr, opr2_test_1)
{
    int s = 1;
    int expected = 10;
    int result = s * 10;
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr2_test_2)
{
    int s = 2;
    int expected = 20;
    int result = s * 10;
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr2_test_3)
{
    int s = 3;
    int expected = 30;
    int result = s * 10;
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr2_test_4)
{
    int s = 4;
    int expected = 40;
    int result = s * 10;
    ASSERT_EQUAL(expected, result);
}
//===============================================================================================================================
CTEST(opr, opr3_test_1)
{
    int m = 10;
    int l = 1;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_2)
{
    int m = 10;
    int l = 2;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_3)
{
    int m = 10;
    int l = 3;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_4)
{
    int m = 10;
    int l = 4;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_5)
{
    int m = 10;
    int l = 5;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_21)
{
    int m = 20;
    int l = 1;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_22)
{
    int m = 20;
    int l = 2;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_23)
{
    int m = 20;
    int l = 3;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_24)
{
    int m = 20;
    int l = 4;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_25)
{
    int m = 20;
    int l = 5;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_31)
{
    int m = 30;
    int l = 1;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_32)
{
    int m = 30;
    int l = 2;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_33)
{
    int m = 30;
    int l = 3;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_34)
{
    int m = 30;
    int l = 4;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_35)
{
    int m = 30;
    int l = 5;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_41)
{
    int m = 40;
    int l = 1;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_42)
{
    int m = 40;
    int l = 2;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_43)
{
    int m = 40;
    int l = 3;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_44)
{
    int m = 40;
    int l = 4;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}

CTEST(opr, opr3_test_45)
{
    int m = 40;
    int l = 5;
    int expected = m + l;
    int result = opr3(m);
    ASSERT_EQUAL(expected, result);
}
