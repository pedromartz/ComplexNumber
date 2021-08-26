#include <stdlib.h>
#include <stdio.h>

#include "../libs/unity.h"
#include "../libs/ComplexNumber.h"

void setup(void)
{
  
}

void tearDown(void)
{
  
}

void test_ComplexNumberInit(void)
{
  ComplexNumber test_number = NULL;
  test_number = newComplexNumber(0,0);
  TEST_ASSERT_NOT_NULL(test_number);
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_ComplexNumberInit, __LINE__);
  return UNITY_END();
}
