#include "mystring.h"

char* my_str_cpy(char* s1, const char* s2) {
    assert(s1 && s2);
    char *saved = s1;

    while ((*s1++ = *s2++) != '\0')
        ;

    return saved;
}

char *my_strn_cpy(char *s1, const char *s2, unsigned int n) {
    assert(s1 && s2);
    size_t i = 0;
    char *saved = s1;

    while ((s1[i] = s2[i]) != '\0' and i < n - 1)
        i++;

    return saved;
}

size_t my_str_len(const char* s) {
    assert(s);
    size_t i = 0;

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
    int i = -1;
    do {
        i++;
        if (s[i] == ch)
            return &s[i];

    } while(s[i] != '\0');

    return NULL;

}

char* my_str_cat(char *s1, const char *s2) {
    assert(s1 && s2);
    size_t i = 0, j = 0;

    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (j = 0; s2[j] != '\0'; j++)
        s1[i + j] = s2[j];
    s1[i + j] = '\0';

    return s1;
}

char *my_strn_cat(char *s1, const char *s2, unsigned int n) {
    assert(s1 && s2);
    size_t i = 0, j = 0;

    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (j = 0; s2[j] != '\0' and j < n; j++)
        s1[i + j] = s2[j];
    s1[i + j] = '\0';

    return s1;
}

int my_fgets(char *s, FILE *f) {
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

size_t my_get_line(char *s, size_t n, FILE *f) {
    assert(s);
    char* s1 = (char*)malloc(n + 1);
    if (s1) {
        int c;
        size_t i = 0, j = 0;

        while ((c = fgetc(f)) != EOF && c != '\n') {
            if (j < n)
               s1[j++] = (char)c;
            i++;
        }
        if (c == EOF && i == 0) {
            free(s1);
            return -1;
        } else {
            s1[j] = '\0';
        }
    }
    return 0;
}
