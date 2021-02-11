/*
** EPITECH PROJECT, 2021
** str_funs.c
** File description:
** Basic Str Functions
*/

#include <unistd.h>

unsigned int my_strlen(char *str)
{
    unsigned int i = 0;

    if (str == NULL)
        return (0);
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void show_usage_error_msg(void)
{
    char *msg = "Usage : ./rostring String.\n";

    write(2, msg, my_strlen(msg));
}

void my_memset(char *str, char byte, unsigned int len)
{
    for (unsigned int i = 0; i <= len; i++)
        str[i] = byte;
}