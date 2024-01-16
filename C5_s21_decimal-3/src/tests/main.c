#include "tests.h"

void run_tests();

int main() {
  run_tests();
  return 0;
}

void run_tests() {
  Suite *suite_case[] = {
      test_s21_add(),      test_s21_sub(),  test_s21_mul(),       test_s21_div(),
      test_s21_is_less(),       test_s21_is_less_or_equal(),  test_s21_is_greater(),  
      test_s21_is_greater_or_equal(), test_s21_is_equal(),       test_s21_is_not_equal(),
      test_s21_from_int_to_decimal(),    test_s21_from_float_to_decimal(),
      test_s21_from_decimal_to_int(),      test_s21_from_decimal_to_float(), 
      test_s21_floor(),   test_s21_round(),
      test_s21_truncate(),     test_s21_negate(), S21_NULL};

  for (Suite **ptr = suite_case; *ptr != S21_NULL; ptr++) {
    runner_test(*ptr);
  }
}

int runner_test(Suite *ptr) {
  SRunner *runner = srunner_create(ptr);

  srunner_run_all(runner, CK_NORMAL);

  int failures = srunner_ntests_failed(runner);
  srunner_free(runner);

  return (failures == 0) ? 0 : 1;
}
