#include "./../header.h"

int prior(char c) {
  int priority = 0;
  if (c == '(' || c == ')') {
    priority = 1;
  } else if (c == '+' || c == '-') {
    priority = 2;
  } else if (c == '*' || c == '/' || c == 'd') {
    priority = 3;
  } else if (c == 'h' || c == 'p' || c == 't' || c == 'k' || c == 'q' ||
             c == 'l' || c == 'a' || c == 'z' || c == 'u' || c == 'v') {
    priority = 5;

  } else if (c == '~' || c == '#') {
    priority = 4;
  } else if (c == '^') {
    priority = 6;
  }
  return priority;
}

void polish_get(t_signes *stack, char *new_data, char *polish) {
  int j = 0, len = strlen(new_data);
  char c = 0;
  for (int i = 0; i < len; i++) {
    c = new_data[i];
    if (!(prior(c))) {
      polish[j] = c;
      j++;
    } else {
      if (c == '(') {
        push_signes(stack, c);
        continue;
      }
      if (c == ')') {
        while (stack->sig[stack->top - 1] != '(') {
          polish[j] = pop_signes(stack);
          j++;
        }
        pop_signes(stack);
        continue;
      }
      int enter = 0;
      if (c == '^' || c == '#' || c == '~') {
        if (stack->top > 0 && prior(c) < prior(stack->sig[stack->top - 1]))
          enter = 1;
      } else {
        if (stack->top > 0 && prior(c) <= prior(stack->sig[stack->top - 1])) {
          if (prior(c) != 5) enter = 1;
        }
      }
      while (stack->top > 0 && enter &&
             prior(c) <= prior(stack->sig[stack->top - 1])) {
        polish[j] = pop_signes(stack);
        j++;
      }
      push_signes(stack, c);
      if (prior(c) != 5 && prior(c) != 4) polish[j++] = '|';
    }
  }

  while (stack->top > 0) {
    polish[j] = pop_signes(stack);
    j++;
  }
  polish[j] = '\0';
}
