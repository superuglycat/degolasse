/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** Entry point
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "protos.h"

void str_copy_with_offset(char *source, char *dest, int source_offset)
{
    unsigned int i = 0;

    for (i; source[i + source_offset] != '\0'; i++)
        dest[i] = source[i + source_offset];
    dest[i + source_offset] = '\0';
}

char *process_rotation(char *str)
{
    unsigned int str_len = my_strlen(str);
    unsigned int first_word_len = 0;
    unsigned int source_offset = 0;
    char *rotated_str = malloc((str_len + 1) * sizeof(char));

    my_memset(rotated_str, ' ', str_len);
    while (str[first_word_len] != ' ')
        first_word_len += 1;
    for (unsigned int i = 0; i < first_word_len; i++)
        rotated_str[str_len - first_word_len + i] = str[i];
    source_offset = first_word_len + 1;
    str_copy_with_offset(str, rotated_str, source_offset);
    return (rotated_str);
}

char run(char *str_to_rotate)
{
    char *clean_str = NULL;
    char *rotated_str = NULL;

    clean_str = my_sanitize_str(str_to_rotate);
    if (clean_str == NULL)
        return (84);
    if (clean_str_includes_several_words(clean_str)) {
        rotated_str = process_rotation(clean_str);
        if (rotated_str == NULL)
            return (84);
    }
    if (rotated_str)
        my_putstr(rotated_str);
    else
        my_putstr(clean_str);
    my_putchar('\n');
    if (rotated_str)
        free(rotated_str);
    if (clean_str)
        free(clean_str);
    return (0);
}

unsigned int main(int argc, char **argv)
{
    char exception_status;

    if (argc == 1) {
        my_putchar('\n');
        return (0);
    }
    if (argc > 2) {
        show_usage_error_msg();
        return (84);
    }
    exception_status = run(argv[1]);
    if (exception_status)
        return (exception_status);
    return (0);
}