#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED
#define FILE_NAME "my.txt"
#include "TXLib.h"
#include <cstdio>

void test_functions ();
bool check_string_quantity(const char* s1, const char* s2) ;
char* my_str_cpy(char* s1, const char* s2);
void my_puts (const char *s);
char *my_strn_cpy(char *s1, const char *s2, unsigned int n);
size_t my_str_len(const char* s);
char* my_str_set(char *s, char c);
char *my_strn_set(char *s, char c, int n);
char* my_str_chr(char * s, int ch);
char *my_str_cat(char *dest, const char *src);
char *my_strn_cat(char *dest, const char *src, unsigned int n);
int my_fgets(char *s, FILE *f);
char* my_str_dup(const char *str);
size_t my_get_line(char *s, size_t n, FILE *f);

#endif // MYSTRING_H_INCLUDED
