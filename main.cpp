#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include "mystring.h"

int main()
{
    char source[] = "Muha = malenkaya ptica";

    char* target = my_str_dup(source);

    printf("%s", target);
    free(target);

    return 0;
}
