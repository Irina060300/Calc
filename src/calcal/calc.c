#include "./../header.h"

double add_result(char *polish, char *new_data, t_signes *stack, t_numbers *stk,
                  double x) {
  polish_get(stack, new_data, polish);
  return create_stk(polish, stk, x);
  ;
}
double create_stk(char *polish, t_numbers *stk, double x) {
  // printf("%s", polish);

  size_t i;
  int j = 0;
  char num[NMAX];
  init_numbers(stk);
  if (strlen(polish) == 1) {
    num[0] = polish[0];
    if (num[0] != 'x')
      push_numbers(stk, atof(num));
    else
      push_numbers(stk, x);
  } else {
    for (i = 0; i < strlen(polish); i++) {
      char c = polish[i];
      if (isnt_digit(c) != 0 && c != '|' && c != '\0') {
        num[j] = polish[i];
        j++;
        if (i != strlen(polish) - 1) continue;
      }
      if (!(num[0] == '\0')) {
        if (num[0] == 'x')
          push_numbers(stk, x);
        else
          push_numbers(stk, atof(num));
      }
      calc(c, stk);
      j = 0;
      memset(num, 0, sizeof(num));
    }
  }
  return stk->num[stk->top - 1];
}

int isnt_digit(char c) {
  int flag = 0;
  if (!(c == '+' || c == '-' || c == '*' || c == '/' || c == '~' || c == '^' ||
        c == 'h' || c == 'p' || c == 'q' || c == 't' || c == 'k' || c == 'l' ||
        c == 'a' || c == 'z' || c == 'u' || c == 'd' || c == 'v'))
    flag++;
  return flag;
}

void calc(char c, t_numbers *stk) {
  double a = 0.0, b = 0.0;
  if (isnt_digit(c) == 0) {
    if (prior(c) == 2 || prior(c) == 3 || prior(c) == 6) {
      a = pop_numbers(stk);
      b = pop_numbers(stk);
      if (c == '+') push_numbers(stk, b + a);
      if (c == '-') push_numbers(stk, b - a);
      if (c == '*') push_numbers(stk, b * a);
      if (c == '/') push_numbers(stk, b / a);
      if (c == 'd') push_numbers(stk, fmod(b, a));
      if (c == '^') push_numbers(stk, pow(b, a));

    } else {
      a = pop_numbers(stk);
      if (c == '~') push_numbers(stk, a - 2 * a);
      if (c == 'h') push_numbers(stk, sin(a));
      if (c == 'p') push_numbers(stk, cos(a));
      if (c == 'a') push_numbers(stk, fabs(a));
      if (c == 't') push_numbers(stk, tan(a));
      if (c == 'k') push_numbers(stk, atan(a));
      if (c == 'q') push_numbers(stk, sqrt(a));
      if (c == 'l') push_numbers(stk, log(a));
      if (c == 'z') push_numbers(stk, asin(a));
      if (c == 'u') push_numbers(stk, acos(a));
      if (c == 'v') push_numbers(stk, log10(a));

      // printf("%lf\n", stk->num[stk->top - 1]);
    }
  }
}
