/*
** EPITECH PROJECT, 2021
** sanitizing.c
** File description:
** Sanitizing funs
*/

#include "protos.h"
#include <stdlib.h>

char *clean_str_generator(char *str, unsigned int memsize)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int copy_that = 0;
    char *clean_str = malloc((memsize + 1) * sizeof(char));

    skip_first_spaces(str, &i);
    for (i; str[i] != '\0'; i++) {
        copy_that = is_this_char_kept(str, i);
        if (copy_that) {
            clean_str[j] = str[i];
            j += 1;
        }
    }
    clean_str[memsize] = '\0';
    return (clean_str);
}

char *my_sanitize_str(char *str)
{
    unsigned int memsize = 0;
    unsigned int copy_that = 0;
    unsigned int i = 0;
    char *clean_str;

    remove_tabulations(str);
    skip_first_spaces(str, &i);
    for (i; str[i] != '\0'; i++)
        memsize += is_this_char_kept(str, i);
    clean_str = clean_str_generator(str, memsize);
    return (clean_str);
}