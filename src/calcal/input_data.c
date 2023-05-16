#include "./../header.h"

void (*change_funcs[])(char *) = {
    change_unar_minus, change_unar_plus, change_mod, change_sqrt, change_asin,
    change_sin,        change_acos,      change_cos, change_atan, change_tg,
    change_log,        change_ln,        NULL};

void init_signes(t_signes *stack) { stack->top = 0; }
void init_numbers(t_numbers *stack) { stack->top = 0; }

void push_signes(t_signes *stack, char c) {
  stack->sig[stack->top] = c;
  stack->top++;
}

void push_numbers(t_numbers *stack, double c) {
  stack->num[stack->top] = c;
  stack->top++;
}

char pop_signes(t_signes *stack) {
  if (stack->top > 0) {
    stack->top--;
  }
  return stack->sig[stack->top];
}

double pop_numbers(t_numbers *stack) {
  if (stack->top >= 0) {
    stack->top--;
  }
  return stack->num[stack->top];
}
void change_str(char *data, char *new_data) {
  for (int i = 0; change_funcs[i] != NULL; i++) {
    change_funcs[i](data);
  }
  delete_spaces(data, new_data);
}
void change_unar_plus(char *data) {
  if (data[0] == '+') {
    data[0] = '#';
  }
  size_t i;
  for (i = 0; i < strlen(data) - 1; i++) {
    if (data[i] == '(' && data[i + 1] == '+') {
      data[i + 1] = '#';
    }
  }
}
void change_unar_minus(char *data) {
  if (data[0] == '-') {
    data[0] = '~';
  }
  size_t i;
  for (i = 0; i < strlen(data) - 1; i++) {
    if (data[i] == '(' && data[i + 1] == '-') {
      data[i + 1] = '~';
    }
  }
}

void change_sin(char *data) {
  int i = 0, len = strlen(data);
  if (len > 2) {
    for (i = 0; i < len - 2; i++) {
      if (data[i] == 's' && data[i + 1] == 'i' && data[i + 2] == 'n') {
        data[i] = 'h';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
      }
    }
  }
}
void change_cos(char *data) {
  int i = 0, len = strlen(data);
  if (len > 2) {
    for (i = 0; i < len - 2; i++) {
      if (data[i] == 'c' && data[i + 1] == 'o' && data[i + 2] == 's') {
        data[i] = 'p';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
      }
    }
  }
}

void change_mod(char *data) {
  int i = 0, len = strlen(data);
  if (len > 2) {
    for (i = 0; i < len - 2; i++) {
      if (data[i] == 'm' && data[i + 1] == 'o' && data[i + 2] == 'd') {
        data[i] = 'd';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
      }
    }
  }
}

void change_log(char *data) {
  int i = 0, len = strlen(data);
  if (len > 2) {
    for (i = 0; i < len - 2; i++) {
      if (data[i] == 'l' && data[i + 1] == 'o' && data[i + 2] == 'g') {
        data[i] = 'v';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
      }
    }
  }
}
void change_tg(char *data) {
  int len = strlen(data), i = 0;
  if (len > 2) {
    for (i = 0; i < len - 2; i++) {
      if (data[i] == 't' && data[i + 1] == 'a' && data[i + 2] == 'n') {
        data[i] = 't';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
      }
    }
  }
}

void change_atan(char *data) {
  int len = strlen(data), i = 0;
  if (len > 3) {
    for (i = 0; i < len - 3; i++) {
      if (data[i] == 'a' && data[i + 1] == 't' && data[i + 2] == 'a' &&
          data[i + 3] == 'n') {
        data[i] = 'k';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
        data[i + 3] = ' ';
      }
    }
  }
}

void change_asin(char *data) {
  int len = strlen(data), i = 0;
  if (len > 3) {
    for (i = 0; i < len - 3; i++) {
      if (data[i] == 'a' && data[i + 1] == 's' && data[i + 2] == 'i' &&
          data[i + 3] == 'n') {
        data[i] = 'z';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
        data[i + 3] = ' ';
      }
    }
  }
}

void change_acos(char *data) {
  int len = strlen(data), i = 0;
  if (len > 3) {
    for (i = 0; i < len - 3; i++) {
      if (data[i] == 'a' && data[i + 1] == 'c' && data[i + 2] == 'o' &&
          data[i + 3] == 's') {
        data[i] = 'u';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
        data[i + 3] = ' ';
      }
    }
  }
}
void change_sqrt(char *data) {
  int i = 0, len = strlen(data);
  if (len > 3) {
    for (i = 0; i < len - 3; i++) {
      if (data[i] == 's' && data[i + 1] == 'q' && data[i + 2] == 'r' &&
          data[i + 3] == 't') {
        data[i] = 'q';
        data[i + 1] = ' ';
        data[i + 2] = ' ';
        data[i + 3] = ' ';
      }
    }
  }
}
void change_ln(char *data) {
  int len = strlen(data), i = 0;
  if (len > 1) {
    for (i = 0; i < len - 1; i++) {
      if (data[i] == 'l' && data[i + 1] == 'n') {
        data[i] = 'l';
        data[i + 1] = ' ';
      }
    }
  }
}
void delete_spaces(char *data, char *new_data) {
  size_t len = strlen(data), i = 0, j = 0;
  for (i = 0; i < len; i++) {
    if (data[i] != ' ') {
      new_data[j] = data[i];
      j++;
    }
  }
  new_data[j] = '\0';
}
