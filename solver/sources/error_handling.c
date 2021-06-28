/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** error_handling
*/

#include "sm_libc.h"
#include "struct.h"

static int check_char(char *map)
{
    int i = 0;

    for (; map[i]; ++i) {
        if (map[i] != '\n' && map[i] != 'o' && map[i] != '.')
            return -1;
    }
    return 0;
}

static int check_lines(char *map, coord_t size)
{
    int count = 0;
    int i = 0;

    for (; map[i] != '\0'; ++i) {
        if (map[i] == '\n') {
            if (count != size.x)
                return -1;
            count = 0;
            i++;
        }
        count++;
    }
    return 0;
}

int error_handling(char *map, coord_t size)
{
    if (sm_count_char(map, '\n') + 1 != size.y) {
        sm_putstr("error 1\n");
        return -1;
    }
    if (check_char(map) != 0) {
        sm_putstr("error 2\n");
        return -1;
    }
    if (check_lines(map, size) != 0) {
        sm_putstr("error 3\n");
        return -1;
    }
    return 0;
}