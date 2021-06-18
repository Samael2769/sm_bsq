/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_str_to_word_array
*/
#include <stdlib.h>
#include "sm_libc.h"

char **malloc_array_with_len(int x, int y)
{
    char **map = malloc(sizeof(char *) * (y + 1));

    if (!map)
        return NULL;
    for (int i = 0; i < y; ++i) {
        map[i] = malloc(sizeof(char) * (x + 1));
        if (!map[i])
            return NULL;
        map[i][x] = '\0';
    }
    map[y] = NULL;
    return map;
}

void fill_map(char *buff, char **map, int x, int y)
{
    int j = 0;
    int k = 0;

    for (int i = 0; buff[i] != '\0'; ++i, ++k) {
        if (buff[i] == '\n') {
            ++i;
            k = 0;
            ++j;
        }
        map[j][k] = buff[i];
    }
}

char **sm_bsqstrtoarr(char *buff, int x, int y)
{
    char **map = malloc_array_with_len(x, y);

    if (!map)
        return NULL;
    fill_map(buff, map, x, y);
    return map;
}