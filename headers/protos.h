/*
** EPITECH PROJECT, 2021
** protos.h
** File description:
** Funs prototypes
*/

#ifndef LOLILOL_H
#define LOLILOL_H
void show_usage_error_msg(void);
void my_putchar(char c);
void my_putstr(char *str);
unsigned int my_strlen(char *str);
void my_memset(char *str, char byte, unsigned int len);
char is_this_char_kept(char *str, unsigned int index);
void remove_tabulations(char *str);
void skip_first_spaces(char *str, unsigned int *index);
char *clean_str_generator(char *str, unsigned int memsize);
char *my_sanitize_str(char *str);
char clean_str_includes_several_words(char *str);
#endif