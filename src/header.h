#ifndef HEADER_H_
#define HEADER_H_
#ifdef __cplusplus
extern "C" {
#endif

#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NMAX 300
#define POLE_HEIGHT 42
#define POLE_WIDTH 163

typedef struct t_signes {
  char sig[NMAX];
  int top;
} t_signes;
typedef struct t_numbers {
  double num[NMAX];
  int top;
} t_numbers;

double add_result(char *polish, char *new_data, t_signes *stack, t_numbers *stk,
                  double x);
void init_signes(t_signes *stack);
void init_numbers(t_numbers *stack);

void push_signes(t_signes *stack, char c);
void push_numbers(t_numbers *stack, double c);

char pop_signes(t_signes *stack);
double pop_numbers(t_numbers *stack);
void input(char *data);
void change_str(char *data, char *new_data);
int prior(char c);

void change_unar_minus(char *data);
void change_unar_plus(char *data);
void change_sin(char *data);
void change_log(char *data);
void change_cos(char *data);
void change_tg(char *data);
void change_sqrt(char *data);
void change_ln(char *data);
void change_atan(char *data);
void change_asin(char *data);
void change_acos(char *data);
void change_mod(char *data);
void delete_spaces(char *data, char *new_data);

int check_data(char *new_data);
void check_extra_symbols(char *new_data);
int check_brackets(char *new_data);
int check_sin(char *new_data);
int check_abs(char *new_data);
int check_cos(char *new_data);
int check_asin(char *new_data);
int check_atan(char *new_data);
int check_acos(char *new_data);
int check_tg(char *new_data);
int check_log(char *new_data);
int check_mod(char *new_data);
int check_sqrt(char *new_data);
int check_ln(char *new_data);
int check_operators(char *new_data);
int check_x(char *new_data);
int check_point(char *new_data);
void polish_get(t_signes *stack, char *new_data, char *polish);
double create_stk(char *polish, t_numbers *stk, double x);
void result(char *polish, t_numbers *stk, char **pole);
int isnt_digit(char c);
void calc(char c, t_numbers *stk);
void create_pole(char **pole, char *polish, t_numbers *stk);
int max_point(char *polish, t_numbers *stk);

#ifdef __cplusplus
}
#endif

#endif  // HEADER_H_
