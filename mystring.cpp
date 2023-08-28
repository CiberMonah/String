#include "mystring.h"
#include "TXLib.h"

char* my_str_cpy(const char* s1, char* s2) {
    assert(s1);
    assert(s2);

    for (int i = 0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    return s2;
}

char *my_strn_cpy(const char *s1, char *s2, int n) {
    assert(s1);
    assert(s2);

    for (int i = 0; s1[i] != '\0' and i < n; i++) {
        s2[i] = s1[i];
    }
    return s2;
}

int my_str_len(const char* s) {
    assert(s);
    int i = 0;

    while(s[i] != '\0')
        i++;
    return i;
}

char* my_str_set(char *s, char c) {
    assert(s);
    int i = 0;

    while(s[i] != '\0') {
        s[i] = c;
        i++;
        }
    s[i + 1] = '\0';
    return s;
}

char* my_strn_set(char *s, char c, int n) {
    assert(s);
    int i = 0;

    while(s[i] != '\0' and i < n) {
        s[i] = c;
        i++;
        }
    s[i + 1] = '\0';
    return s;
}

void my_puts (const char *s) {
    assert(s);
    int i = 0;

    while(s[i] != '\0') {
        printf("%c", s[i]);
        i++;
    }
}

char* my_str_chr(char * s, int ch) {
    assert(s);
    int i = 0;

    while(s[i] != '\0') {
        if (s[i] == ch)
            return &s[i];
        i++;
    }
    return NULL;
}

char* my_str_cat(char *s1, const char *s2) {
    assert(s1);
    assert(s2);
    size_t i = 0, j = 0;

    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (j = 0; s2[j] != '\0'; j++)
        s1[i + j] = s2[j];
    s1[i + j] = '\0';

    return s1;
}

char *my_strn_cat(char *s1, const char *s2, unsigned int n) {
    assert(s1);
    assert(s2);
    size_t i = 0, j = 0;

    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (j = 0; s2[j] != '\0' and j < n; j++)
        s1[i + j] = s2[j];
    s1[i + j] = '\0';

    return s1;
}

int my_fgets (FILE *f, char *s) {
    size_t i = 0;
    int c;

    while ((c = fgetc(f)) != EOF && c != '\n')
            s[i++] = (char)c;
    s[i] = '\0';

    return 1;
}

char* my_str_dup(const char *str) {
    size_t i = 0;

    for (i = 0; str[i] != '\0'; i++)
        ;
    char* dup = (char*)malloc(i * sizeof(char));
    for (i = 0; str[i] != '\0'; i++)
        dup[i] = str[i];
    return dup;
}

char* my_get_line(FILE *f, char *s, size_t n) {
    size_t i = 0;

    if (n) {
        int c;

        while (i < n - 1 && (c = fgetc(f)) != EOF && c != '\n')
            s[i++] = (char)c;
    }
    s[i] = '\0';

    return s;
}
