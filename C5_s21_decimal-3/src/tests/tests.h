#ifndef TESTS_H
#define TESTS_H

#include <check.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

//#include "../functions_s21_sprintf/s21_sprintf.h"
#include "../s21_decimal.h"

int runner_test(Suite *ptr);

Suite *test_s21_add(void);
Suite *test_s21_sub(void);
Suite *test_s21_mul(void);
Suite *test_s21_div(void);
Suite *test_s21_is_less(void);
Suite *test_s21_is_less_or_equal(void);
Suite *test_s21_is_greater(void);
Suite *test_s21_is_greater_or_equal(void);
Suite *test_s21_is_equal(void);
Suite *test_s21_is_not_equal(void);
Suite *test_s21_from_int_to_decimal(void);
Suite *test_21_from_float_to_decimal(void);
Suite *test_s21_from_decimal_to_int(void);
Suite *test_21_from_decimal_to_float(void);
Suite *test_s21_floor(void);
Suite *test_s21_round(void);
Suite *test_21_truncate(void);
Suite *test_s21_negate(void);

#endif /* TESTS_H */
