/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** bsq
*/

#include "sm_libc.h"
#include "struct.h"
#include "bsq.h"
#include <stdlib.h>

int bsq(char const *filepath)
{
    char *stream = read_file(filepath);
    char **map;
    coord_t size;

    if (!stream)
        return -1;
    size.y = get_cols(stream);
    size.x = get_rows(stream);
    stream = set_map(stream);
    map = sm_bsqstrtoarr(stream, size.x, size.y);
    find_square(map, size);
    return 0;
}