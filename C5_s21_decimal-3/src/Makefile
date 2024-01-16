GCC = gcc
CFLAGS = -c
FLAG_ER = -Wall -Wextra -Werror --std=c11 --pedantic
LDFLAGS = -lcheck -lm -lrt -lsubunit -lgcov -pthread --coverage
s21_DECIMAL_C = functions_s21_decimal/s21_*.c
s21_DECIMAL_O = s21_*.o
s21_DECIMAL_TEST_C = tests/*.c
s21_DECIMAL_TEST_O = test_*.o

all: build

build: s21_decimal.a

s21_string.a: s21_decimal.h
	$(GCC) $(CFLAGS) $(FLAG_ER) $(s21_DECIMAL_C)
	ar rcsv s21_decimal.a $(s21_DECIMAL_O)
	rm *.o

test: s21_string.a
	$(CC) $(FLAG_ER) -o test ${s21_DECIMAL_TEST_C} $(s21_DECIMAL_C) $(LDFLAGS)
	./test

gcov_report: test
	gcovr -r . --html --html-details -o s21_decimal.html
	open s21_decimal.html
	# xdg-open s21_decimal.html

clean:
	rm -rf $(PATH_TESTS)*.o main $(PATH_TESTS)*.gcno $(PATH_TESTS)*.gcov \
	 $(PATH_TESTS)*.gcda $(PATH_TESTS)*.a $(PATH_TESTS)*.gcno $(SRC_DIR)*.o \
	  main $(SRC_DIR)*.gcno $(SRC_DIR)*.gcov $(SRC_DIR)*.gcda $(SRC_DIR)*.a \
	  $(SRC_DIR)*.gcno *.gcov report *.info *.html *.css test