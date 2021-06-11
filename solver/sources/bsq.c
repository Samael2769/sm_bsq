/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** bsq
*/

#include "sm_libc.h"

int bsq(char const *filepath)
{
    char *stream = read_file(filepath);
    char **map;

    if (!stream)
        return -1;
    map = sm_strtoarr(stream, '\n');
    /*for (int i = 0; map[i]; ++i)
        printf("%s\n", map[i]);*/
    return 0;
}