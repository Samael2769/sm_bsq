/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** error_handling
*/

#include "sm_libc.h"
#include "struct.h"

static int check_char(char **map)
{
    for (int i = 0; map[i]; ++i)
        for (int j = 0; map[i][j]; ++j)
            if (map[i][j] != 'o' && map[i][j] != '.')
                return -1;
    return 0;
}

static int check_lines(char **map, coord_t size)
{
    for (int i = 0; map[i]; ++i) {
        if ((int)sm_strlen(map[i]) != size.x)
            return -1;
    }
    return 0;
}

int error_handling(char **map, coord_t size)
{
    if (sm_tablen(map) - 1 != size.y)
        return -1;
    if (check_char(map) != 0)
        return -1;
    if (check_lines(map, size) != 0)
        return -1;
    return 0;
}