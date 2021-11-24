#include "unity.h"
#include <Telecom_Billing.h>

/* Modify these two lines according to the project */
#include <Telecom_Billing.h>
#define PROJECT_NAME    "TelecomBilling"

/* Prototypes for all the test functions */
void test_add_records(void);
void test_delete_records(void);
void test_search_records(void);
void test_modify_records(void);
void payment(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_records);
  RUN_TEST(test_delete_records);
  RUN_TEST(test_search_records);
  RUN_TEST(test_modify_records);
  RUN_TEST(test_payment);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 

void test_add_records(void) {
 
  /* Dummy fail*/
TEST_ASSERT_EQUAL(9874563210,rio,Rs 500);
TEST_ASSERT_EQUAL(9874562158,ram,Rs 900);
}
void test_list_records(void) {
  
  /* Dummy fail*/
TEST_ASSERT_EQUAL(9874563210,rio,Rs 500);
TEST_ASSERT_EQUAL(9874562158,ram,Rs 900);
}

void test_delete_records(void) {
  
  /* Dummy fail*/
TEST_ASSERT_EQUAL(9874562158,ram,Rs 900);
}

void test_search_records(void) {
  
  /* Dummy fail*/
  
 TEST_ASSERT_EQUAL(9874563210,rio,Rs 500);
 }
void test_modify_records(void) {
  TEST_ASSERT_EQUAL(9874563210,rio,Rs 500);
  TEST_ASSERT_EQUAL(9874563210,rio,Rs 50);
}
void test_payment(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-30, add(-10, -20));
  TEST_ASSERT_EQUAL(10, add(-10, 20));
}
