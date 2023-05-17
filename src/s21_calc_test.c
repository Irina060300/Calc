#include <check.h>

#include "header.h"

// INCORRECT INPUT

START_TEST(incorrect_input_1) {
  char data[NMAX] = "-)5+3)(9.92sin+-2cos88acos";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST

START_TEST(incorrect_input_2) {
  char data[NMAX] = "()()9.2.654lnlogtan+atan)(";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST

START_TEST(incorrect_input_3) {
  char data[NMAX] = "()52()9.2.654lasin95++++5--^-+5.2.236log5sqrt)";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST

START_TEST(incorrect_input_4) {
  char data[NMAX] =
      "()(()(..54000.*)52()9.2.654lasin95++++5--^-+5.2.236log5sqrt-)-())";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST

START_TEST(incorrect_input_5) {
  char data[NMAX] = "*(546456)(456456456)";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST
START_TEST(incorrect_input_6) {
  char data[NMAX] = "-*";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST
START_TEST(incorrect_input_7) {
  char data[NMAX] = "+*";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST
START_TEST(incorrect_input_8) {
  char data[NMAX] = "sin(5)(6)";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST

START_TEST(incorrect_input_9) {
  char data[NMAX] = "5acos(0.5)";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST
START_TEST(incorrect_input_10) {
  char data[NMAX] = "sinxacosx(())";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST
START_TEST(incorrect_input_11) {
  char data[NMAX] = "xcosx";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST
START_TEST(incorrect_input_12) {
  char data[NMAX] = "-";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST

START_TEST(incorrect_input_13) {
  char data[NMAX] = "((-))(+$)";
  char new_data[NMAX] = {'\0'};
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 1);
}
END_TEST
// NUMBERS RESULT
START_TEST(numbers_result_1) {
  char data[NMAX] = "(1.5 * 4 + 2)/2";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_ldouble_eq_tol(add_result(polish, new_data, &stack, &stk, 0), 4,
                           0.0000001);
}
END_TEST

START_TEST(numbers_result_2) {
  char data[NMAX] = "2^(2^(2))";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_ldouble_eq_tol(add_result(polish, new_data, &stack, &stk, 0), 16,
                           0.0000001);
}
END_TEST

START_TEST(numbers_result_3) {
  char data[NMAX] = "-6+18/4";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_ldouble_eq_tol(add_result(polish, new_data, &stack, &stk, 0), -1.5,
                           0.0000001);
}
END_TEST

START_TEST(numbers_result_4) {
  char data[NMAX] = "(5+3)/sqrt(2.25)*3/2.5";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0), 6.4,
                          0.0000001);
}
END_TEST

START_TEST(numbers_result_5) {
  char data[NMAX] = "asin(0.6)/(cos(35))";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0),
                          asin(0.6) / (cos(35)), 0.0000001);
}
END_TEST

START_TEST(numbers_result_6) {
  char data[NMAX] = "tan(0.6)*3.55/12.44*sqrt(216321)-70/(2.5+33.55*(2+3))";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(
      add_result(polish, new_data, &stack, &stk, 0),
      tan(0.6) * 3.55 / 12.44 * sqrt(216321) - 70 / (2.5 + 33.55 * (2 + 3)),
      0.0000001);
}
END_TEST

START_TEST(numbers_result_7) {
  char data[NMAX] =
      "atan(0.6)+5^(2.5)/0.2 +12.44*sqrt(51321 + 4.71 mod 2) "
      "-70/(2.5+33.55*(2+3.56/2))";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0),
                          atan(0.6) + pow(5, 2.5) / 0.2 +
                              12.44 * sqrt(51321 + fmod(4.71, 2)) -
                              70 / (2.5 + 33.55 * (2 + 3.56 / 2)),
                          0.0000001);
}
END_TEST

START_TEST(numbers_result_8) {
  char data[NMAX] = "acos(0.6)+asin(0.1)*tan(12) - 14.565/sqrt(0.09)*7.5";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(
      add_result(polish, new_data, &stack, &stk, 0),
      acos(0.6) + asin(0.1) * tan(12) - 14.565 / sqrt(0.09) * 7.5, 0.0000001);
}
END_TEST

START_TEST(numbers_result_9) {
  char data[NMAX] = "cos(6524+x/2.33)*74*log(45)/ln(33)";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 214.255),
                          cos(6524 + 214.255 / 2.33) * 74 * log10(45) / log(33),
                          0.0000001);
}
END_TEST

START_TEST(numbers_result_10) {
  char data[NMAX] = "log(ln(sin(0.2))) + 14.25/atan(2) + 2^(1^2)";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);

  ck_assert_int_eq(isnan(add_result(polish, new_data, &stack, &stk, 0)), 1);
}
END_TEST

START_TEST(numbers_result_11) {
  char data[NMAX] = "5";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0), 5,
                          0.0000001);
}
END_TEST

START_TEST(numbers_result_12) {
  char data[NMAX] = "x";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 3.55),
                          3.55, 0.0000001);
}
END_TEST

START_TEST(numbers_result_13) {
  char data[NMAX] = "2^(1+1)^3^(cos(0))";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0),
                          pow(2, pow(2, 3)), 0.0000001);
}
END_TEST

START_TEST(numbers_result_14) {
  char data[NMAX] = "2^sin(x)";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0.5),
                          pow(2, sin(0.5)), 0.0000001);
}
END_TEST

START_TEST(numbers_result_15) {
  char data[NMAX] = "5 mod sin(x)";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0.5),
                          fmod(5, sin(0.5)), 0.0000001);
}
END_TEST

START_TEST(numbers_result_16) {
  char data[NMAX] = "5 mod (7.5 mod 0.5^sin(x))";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 24),
                          fmod(5, fmod(7.5, pow(0.5, sin(24)))), 0.0000001);
}
END_TEST

START_TEST(numbers_result_17) {
  char data[NMAX] = "16^2/(+5-1)*(-5+2.5)";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0),
                          pow(16, 2) / 4 * (-2.5), 0.0000001);
}
END_TEST

START_TEST(numbers_result_18) {
  char data[NMAX] = "sin(cos(atan(asin(x))))";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0.01),
                          sin(cos(atan(asin(0.01)))), 0.0000001);
}
END_TEST

START_TEST(numbers_result_19) {
  char data[NMAX] = "53.25 mod 6 mod 7^asin(0.233)";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0),
                          fmod(fmod(53.25, 6), pow(7, asin(0.233))), 0.0000001);
}
END_TEST

START_TEST(numbers_result_20) {
  char data[NMAX] = "2^log(24)/tan(1)";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0),
                          pow(2, log10(24)) / tan(1), 0.0000001);
}
END_TEST

START_TEST(numbers_result_21) {
  char data[NMAX] = "656.2313/17.5+atan(25) + cos(32) mod (75 mod 2.33)";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(
      add_result(polish, new_data, &stack, &stk, 0),
      656.2313 / 17.5 + atan(25) + fmod(cos(32), fmod(75, 2.33)), 0.0000001);
}
END_TEST

START_TEST(numbers_result_22) {
  char data[NMAX] = "16^2/(+5-1)*(-5+2.5)*36^(-atan(sin(0.25)))";
  char new_data[NMAX] = {'\0'}, polish[NMAX] = {'\0'};
  t_signes stack;
  t_numbers stk;
  init_signes(&stack);
  change_str(data, new_data);
  ck_assert_int_eq(check_data(new_data), 0);
  ck_assert_double_eq_tol(add_result(polish, new_data, &stack, &stk, 0),
                          pow(16, 2) / 4 * (-2.5) * pow(36, -atan(sin(0.25))),
                          0.0000001);
}
END_TEST

int main(void) {
  Suite *s = suite_create("Calculator");
  SRunner *sr = srunner_create(s);

  TCase *tc_incorrect_input = tcase_create("incorrect_input");
  suite_add_tcase(s, tc_incorrect_input);
  tcase_add_test(tc_incorrect_input, incorrect_input_1);
  tcase_add_test(tc_incorrect_input, incorrect_input_2);
  tcase_add_test(tc_incorrect_input, incorrect_input_3);
  tcase_add_test(tc_incorrect_input, incorrect_input_4);
  tcase_add_test(tc_incorrect_input, incorrect_input_5);
  tcase_add_test(tc_incorrect_input, incorrect_input_6);
  tcase_add_test(tc_incorrect_input, incorrect_input_7);
  tcase_add_test(tc_incorrect_input, incorrect_input_8);
  tcase_add_test(tc_incorrect_input, incorrect_input_9);
  tcase_add_test(tc_incorrect_input, incorrect_input_10);
  tcase_add_test(tc_incorrect_input, incorrect_input_11);
  tcase_add_test(tc_incorrect_input, incorrect_input_12);
  tcase_add_test(tc_incorrect_input, incorrect_input_13);
  TCase *tc_numbers_result = tcase_create("numbers_result");
  suite_add_tcase(s, tc_numbers_result);
  tcase_add_test(tc_numbers_result, numbers_result_1);
  tcase_add_test(tc_numbers_result, numbers_result_2);
  tcase_add_test(tc_numbers_result, numbers_result_3);
  tcase_add_test(tc_numbers_result, numbers_result_4);
  tcase_add_test(tc_numbers_result, numbers_result_5);
  tcase_add_test(tc_numbers_result, numbers_result_6);
  tcase_add_test(tc_numbers_result, numbers_result_7);
  tcase_add_test(tc_numbers_result, numbers_result_8);
  tcase_add_test(tc_numbers_result, numbers_result_9);
  tcase_add_test(tc_numbers_result, numbers_result_10);
  tcase_add_test(tc_numbers_result, numbers_result_11);
  tcase_add_test(tc_numbers_result, numbers_result_12);
  tcase_add_test(tc_numbers_result, numbers_result_13);
  tcase_add_test(tc_numbers_result, numbers_result_14);
  tcase_add_test(tc_numbers_result, numbers_result_15);
  tcase_add_test(tc_numbers_result, numbers_result_16);
  tcase_add_test(tc_numbers_result, numbers_result_17);
  tcase_add_test(tc_numbers_result, numbers_result_18);
  tcase_add_test(tc_numbers_result, numbers_result_19);
  tcase_add_test(tc_numbers_result, numbers_result_20);
  tcase_add_test(tc_numbers_result, numbers_result_21);
  tcase_add_test(tc_numbers_result, numbers_result_22);
  srunner_run_all(sr, CK_VERBOSE);
  int nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
