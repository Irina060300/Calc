#include "./../header.h"

int check_data(char *new_data) {
  int flag = 0;
  if (check_brackets(new_data) != 0) flag++;
  if (check_sin(new_data) != 0) flag++;
  if (check_cos(new_data) != 0) flag++;
  if (check_log(new_data) != 0) flag++;
  if (check_atan(new_data) != 0) flag++;
  if (check_asin(new_data) != 0) flag++;
  if (check_acos(new_data) != 0) flag++;
  if (check_tg(new_data) != 0) flag++;
  if (check_sqrt(new_data) != 0) flag++;
  if (check_ln(new_data) != 0) flag++;
  if (check_operators(new_data) != 0) flag++;
  if (check_x(new_data) != 0) flag++;
  if (check_point(new_data) != 0) flag++;
  return (flag > 0) ? 1 : 0;
}

int check_brackets(char *new_data) {
  int flag = 0;
  int len = strlen(new_data);
  int count_open = 0, count_close = 0;
  for (int i = 0; i < len - 1; i++) {
    if (new_data[i] == '(') break;
    if (new_data[i] == ')') {
      flag++;
      break;
    }
  }
  for (int i = 0; i < len - 1; i++) {
    if (new_data[i] == '(') count_open++;
    if (new_data[i] == ')') count_close++;
    if (new_data[i] == '(' && new_data[i + 1] == ')') flag++;
  }
  if (new_data[len - 1] == ')') count_close++;
  if (new_data[len - 1] == '(') count_open++;
  if (count_open != count_close) flag++;
  if (flag == 0) {
    for (int i = 1; i < len; i++) {
      if (new_data[i] == '(') {
        if (strchr("(+-~#*/^dhpqkzutvl", new_data[i - 1]) == NULL) {
          flag++;
          break;
        }
      }
    }
    for (int i = 0; i < len - 1; i++) {
      if (new_data[i] == ')') {
        if (strchr(")+-*/^d", new_data[i + 1]) == NULL) {
          flag++;
          break;
        }
      }
    }
  }

  return flag;
}

int check_sin(char *new_data) {
  int flag = 0;
  int len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 'h') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}

int check_cos(char *new_data) {
  int flag = 0, len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 'p') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}

int check_log(char *new_data) {
  int flag = 0, len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 'v') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}

int check_tg(char *new_data) {
  int flag = 0, len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 't') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}

int check_sqrt(char *new_data) {
  int flag = 0, len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 'q') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}

int check_ln(char *new_data) {
  int flag = 0, len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 'l') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}

int check_atan(char *new_data) {
  int flag = 0, len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 'k') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}

int check_asin(char *new_data) {
  int flag = 0, len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 'z') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}

int check_acos(char *new_data) {
  int flag = 0, len = strlen(new_data);
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == 'u') {
      if (strchr("+-~*/(^d#", new_data[i - 1]) == NULL) flag++;
    }
  }
  return flag;
}
int check_operators(char *new_data) {
  int flag = 0, len = strlen(new_data), i;
  if (new_data[0] == '*' || new_data[0] == '/' || new_data[0] == '^' ||
      new_data[0] == 'd')
    flag++;
  if ((new_data[0] == '#' || new_data[0] == '~') && len == 1) flag++;
  for (i = 1; i < len - 1; i++) {
    if (new_data[i] == '+' || new_data[i] == '-' || new_data[i] == '*' ||
        new_data[i] == '/' || new_data[i] == '^' || new_data[0] == 'd') {
      if (strchr(")x0123456789", new_data[i - 1]) == NULL) flag++;
      if (strchr("(xhpvtkzuql0123456789", new_data[i + 1]) != NULL) {
        continue;
      } else {
        flag++;
      }
    }
    if (new_data[i] == '~' || new_data[i] == '#') {
      if (strchr("0123456789xhpvtkzuql", new_data[i + 1]) == NULL) {
        flag++;
      }
    }
  }
  if (new_data[i] == '+' || new_data[i] == '-' || new_data[i] == '*' ||
      new_data[i] == '/' || new_data[i] == 'd')
    flag++;
  return flag;
}

int check_x(char *new_data) {
  int flag = 0;
  int i;
  int len = strlen(new_data);
  if (len != 1) {
    if (new_data[0] == 'x') {
      if (strchr("+-*/^d", new_data[1]) == NULL) flag++;
    }
    for (i = 1; i < len - 1; i++) {
      if (new_data[i] == 'x') {
        if (strchr("+-*/(~#^d)", new_data[i - 1]) == NULL) flag++;
        if (strchr("+-*/)^d)", new_data[i + 1]) == NULL) flag++;
      }
    }
    if (new_data[len - 1] == 'x') {
      if (strchr("+-*/(~^d", new_data[len - 2]) == NULL) flag++;
    }
  }
  return flag;
}

int check_point(char *new_data) {
  int flag = 0, len = strlen(new_data);
  if (new_data[0] == '.') flag++;
  if (new_data[len - 1] == '.') flag++;
  int index_point[255] = {0};
  int count_point = 0;
  for (int i = 1; i < len - 1; i++) {
    if (new_data[i] == '.') {
      if (!(new_data[i - 1] >= '0' && new_data[i - 1] <= '9')) flag++;
      if (!(new_data[i + 1] >= '0' && new_data[i + 1] <= '9')) flag++;
      index_point[count_point] = i;
      count_point++;
    }
  }

  if (!flag && index_point[0] != 0) {
    int right_count = 0, stop = 0;
    for (int i = 0; i < count_point; i++) {
      stop = 0;
      for (int j = index_point[i]; j < index_point[i + 1]; j++) {
        if (strchr("+-*/^d", new_data[j]) != NULL) {
          stop++;
        }
      }
      if (stop > 0) right_count++;
    }
    if (right_count != count_point - 1) flag++;
  }
  return flag;
}
