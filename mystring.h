#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED
#define FILE_NAME "my.txt"
#include <cstdio>

char* my_str_cpy(const char* s1, char* s2);
void my_puts (const char *s);
char *my_strn_cpy(const char *s1, char *s2, int n);
int my_str_len(const char* s);
char* my_str_set(char *s, char c);
char *my_strn_set(char *s, char c, int n);
char* my_str_chr(char * s, int ch);
char *my_str_cat(char *dest, const char *src);
char *my_strn_cat(char *dest, const char *src, unsigned int n);
int my_fgets (char *s, unsigned int n);
char* my_str_dup(const char *str);
char* my_get_line(FILE *f, char *s, size_t n);
int my_fgets (FILE *f, char *s);

#endif // MYSTRING_H_INCLUDED
