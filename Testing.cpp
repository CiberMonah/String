#include "mystring.h"
#include <string.h>

bool check_string_quantity(const char* s1, const char* s2) {
    assert(s1);
    assert(s2);

    for (int i = 0; s1[i] != '\0'; i++) {
        if(s1[i] != s2[i])
            return false;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        if(s2[i] != s1[i])
            return false;
    }

    return true;
}

void test_functions () {
    char s1[] = "Veloseped";
    char s2[] = "Samocat";
    char s1_ref[] = "Veloseped";
    char s2_ref[] = "Samocat";

    my_str_cpy(s1, s2);
    strcpy(s1_ref, s2_ref);
    if(check_string_quantity(s2, s2_ref))
        printf("Succes in strcpy function\n");
    else
        printf("Error in strcpy function\n");

    char s3[] = "Veloseped";
    char s4[] = "Samocat";
    char s3_ref[] = "Veloseped";
    char s4_ref[] = "Samocat";

    my_strn_cpy(s3, s4, 4);
    strncpy(s3_ref, s4_ref, 4);
    if(check_string_quantity(s3, s3_ref))
        printf("Succes in strncpy function\n");
    else
        printf("Error in strncpy function: expected %s\n, real %s\n", s3_ref, s3);

    char* arr;
    char* arr_ref;
    arr = my_str_dup(s1);
    arr_ref = strdup(s1);

    if(check_string_quantity(arr, arr_ref))
        printf("Succes in strdup function\n");
    else
        printf("Error in strdup function\n");

    if(strlen(s3) == my_str_len(s3))
        printf("Succes in strlen function\n");
    else
        printf("Error in strlen function\n");


    if (check_string_quantity(my_str_cat(s3, s4), strcat(s3, s4)))
        printf("Succes in strcat function\n");
    else
        printf("Error in strcat function\n");


    if (check_string_quantity(my_strn_cat(s3, s4, 5), strncat(s3, s4, 5)))
        printf("Succes in strncat function\n");
    else
        printf("Error in strncat function\n");

    if(my_str_chr(s3, '\0') == strchr(s3, '\0'))
        printf("Succes in strchr function\n");
    else
        printf("Error in strchr function expected: %p real %p\n", strchr(s3, '\0'), my_str_chr(s3, '\0'));


}
