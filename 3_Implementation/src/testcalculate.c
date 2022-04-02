/**
 * @file testcalculate.c
 * @author vanka vinaya kumar (you@domain.com)
 * @brief  testing unit converter
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"calculate.h"
#include"unity.h"

void setUp()
{
}
void tearDown()
{
}

void test_killometer_to_meter(void)
{
  TEST_ASSERT_EQUAL(14000, calculate_length_menu1(1,14));
  TEST_ASSERT_EQUAL(50000, calculate_length_menu1(1,50));
  TEST_ASSERT_EQUAL(84000, calculate_length_menu1(1,84));
  
}
void test_kilometer_to_centimeter(void)
{
  TEST_ASSERT_EQUAL(1200000, calculate_length_menu1(2,12));
  TEST_ASSERT_EQUAL(3900000, calculate_length_menu1(2,39));
  TEST_ASSERT_EQUAL(6700000, calculate_length_menu1(2,67));
  
}
void test_kilometer_to_millimeter(void)
{
  TEST_ASSERT_EQUAL(61000000, calculate_length_menu1(3,61));
  TEST_ASSERT_EQUAL(12000000, calculate_length_menu1(3,12));
  TEST_ASSERT_EQUAL(85000000, calculate_length_menu1(3,85));
  
}
void test_meter_to_kilometer(void)
{
  TEST_ASSERT_EQUAL(2, calculate_length_menu1(4,2000));
  TEST_ASSERT_EQUAL(34, calculate_length_menu1(4,34000));
  TEST_ASSERT_EQUAL(0.252, calculate_length_menu1(4,252));
  
}
void test_meter_to_centimeter(void)
{
  TEST_ASSERT_EQUAL(2500, calculate_length_menu1(5,25));
  TEST_ASSERT_EQUAL(1000, calculate_length_menu1(5,10));
  TEST_ASSERT_EQUAL(5000, calculate_length_menu1(5,50));
  
}
void test_meter_to_millimeter(void)
{
  TEST_ASSERT_EQUAL(24000, calculate_length_menu1(6,24));
  TEST_ASSERT_EQUAL(34000, calculate_length_menu1(6,34));
  TEST_ASSERT_EQUAL(44000, calculate_length_menu1(6,44));
  
}
void test_centimeter_to_kilometer(void)
{
  TEST_ASSERT_EQUAL(0.14, calculate_length_menu1(7,14000));
  TEST_ASSERT_EQUAL(2.1, calculate_length_menu1(7,210000));
  TEST_ASSERT_EQUAL(0.28, calculate_length_menu1(7,28000));
  
}
void test_centimeter_to_meter(void)
{
  TEST_ASSERT_EQUAL(1.6, calculate_length_menu1(8,160));
  TEST_ASSERT_EQUAL(3.29, calculate_length_menu1(8,329));
  TEST_ASSERT_EQUAL(2.4, calculate_length_menu1(8,240));
  
}
void test_centimeter_to_millimeter(void)
{
  TEST_ASSERT_EQUAL(180, calculate_length_menu1(9,18));
  TEST_ASSERT_EQUAL(270, calculate_length_menu1(9,27));
  TEST_ASSERT_EQUAL(360, calculate_length_menu1(9,36));
  
}
void test_millimeter_to_kilometer(void)
{
  TEST_ASSERT_EQUAL(12, calculate_length_menu1(10,12000000));
  TEST_ASSERT_EQUAL(3.4, calculate_length_menu1(10,3400000));
  TEST_ASSERT_EQUAL(63.5, calculate_length_menu1(10,63500000));
  
}
void test_millimeter_to_meter(void)
{
  TEST_ASSERT_EQUAL(0.45, calculate_length_menu1(11,450));
  TEST_ASSERT_EQUAL(6.565, calculate_length_menu1(11,6565));
  TEST_ASSERT_EQUAL(34.343, calculate_length_menu1(11,34343));
  
}
void test_millimeter_to_centimeter(void)
{
  TEST_ASSERT_EQUAL(43, calculate_length_menu1(12,4345));
  TEST_ASSERT_EQUAL(5, calculate_length_menu1(12,536));
  
}
void test_inch_to_feet(void)
{
  TEST_ASSERT_EQUAL(45000, calculate_length_menu1(1,45));
  
}
void test_foot_to_inch(void)
{
  TEST_ASSERT_EQUAL(500000, calculate_length_menu1(2,5));
  
}
void test_yard_to_cent(void)//91.44
{
  TEST_ASSERT_EQUAL(43000000, calculate_length_menu1(3,43));
  
  
}
void test_cent_to_yard(void)
{
  TEST_ASSERT_EQUAL(0, calculate_length_menu1(4,27));
  
}
void test_kg_g(void)
{
  TEST_ASSERT_EQUAL(10000, calculate_length_menu1(1,10));
  TEST_ASSERT_EQUAL(1000, calculate_length_menu1(1,1));
  TEST_ASSERT_EQUAL(5000, calculate_length_menu1(1,5));
  
}
void test_g_kg(void)
{
  TEST_ASSERT_EQUAL(500000000, calculate_length_menu1(2,5000.0));

  
}
void test_kg_pound(void)
{
  TEST_ASSERT_EQUAL(12000000, calculate_length_menu1(3,12));
  
}
void test_pound_kg(void)
{
  TEST_ASSERT_EQUAL(0, calculate_length_menu1(4,120));
  
}
void test_c_f(void)
{
  TEST_ASSERT_EQUAL(10000, calculate_length_menu1(1,10));
  
}
void test_f_c(void)
{
  TEST_ASSERT_EQUAL(100000, calculate_length_menu1(1,100));
  
}



int test(void){
  UNITY_BEGIN();
  RUN_TEST(test_killometer_to_meter);

  RUN_TEST(test_kilometer_to_centimeter);

  RUN_TEST(test_kilometer_to_millimeter);

  RUN_TEST(test_meter_to_kilometer);
  
  RUN_TEST(test_meter_to_centimeter);

  RUN_TEST(test_meter_to_millimeter);

  RUN_TEST(test_centimeter_to_kilometer);

  RUN_TEST(test_centimeter_to_meter);

  RUN_TEST(test_centimeter_to_millimeter);

  RUN_TEST(test_millimeter_to_kilometer);

  RUN_TEST(test_millimeter_to_meter);

  RUN_TEST(test_millimeter_to_centimeter);

  RUN_TEST(test_inch_to_feet);

  RUN_TEST(test_foot_to_inch);

  RUN_TEST(test_yard_to_cent);

  RUN_TEST(test_cent_to_yard);

  RUN_TEST(test_kg_g);

  RUN_TEST(test_g_kg);
  
  RUN_TEST(test_kg_pound);
  
  RUN_TEST(test_pound_kg);
  
  RUN_TEST(test_c_f);
  
  RUN_TEST(test_f_c);
  
  
  
  return UNITY_END();
}