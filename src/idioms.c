/*
** EPITECH PROJECT, 2021
** idioms.c
** File description:
** Stepdown rule for real
*/

void skip_first_spaces(char *str, unsigned int *index)
{
    while (str[*index] == ' ')
        *index += 1;
}

char is_this_char_kept(char *str, int index)
{
    if (str[index] == ' ') {
        if (str[index + 1] != ' ' && str[index + 1] != '\0')
            return (1);
    } else
        return (1);
    return (0);
}

void remove_tabulations(char *str)
{
    for (unsigned int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\t')
            str[i] = ' ';
}

char clean_str_includes_several_words(char *str)
{
    unsigned int i = 0;
    char first_switch = 0;

    while (str[i] != '\0') {
        if (str[i] != '\0' && str[i] == ' ')
            first_switch = 1;
        if (str[i] != '\0' && str[i] != ' ' && first_switch)
            return (1);
        i += 1;
    }
    return (0);
}