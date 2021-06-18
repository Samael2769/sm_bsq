/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** find_square
*/

#include "struct.h"
#include "sm_libc.h"

static int is_square(char **map, coord_t coords, coord_t size, int len)
{
    for (int i = coords.y; i < coords.y + len; ++i) {
        if (i == size.y)
            return 1;
        for (int j = coords.x; j < coords.x + len; ++j) {
            if (map[i][j] != '.' || j == size.x)
                return 1;
        }
    }
    return 0;
}

static int is_biggest(char **map, coord_t coords, coord_t size, square_t *square)
{
    int len = square->size;
    int sqr = 0;

    while (sqr == 0) {
        len++;
        sqr = is_square(map, coords, size, len);
    }
    if (len - 1 > square->size) {
        square->size = len - 1;
        return 1;
    }
    return 0;
}

static int find_biggest_square(char **map, coord_t size, square_t *square)
{
    for (int i = 0; i < size.y; ++i) {
        for (int j = 0; j < size.x; ++j) {
            if (is_biggest(map, (coord_t){j, i}, size, square) == 1) {
                square->coords.x = j;
                square->coords.y = i;
            }
        }
    }
    return 0; 
}

static void display_map(char **map, square_t square)
{
    for (int i = square.coords.y; i < square.coords.y + square.size && map[i]; ++i)
        for (int j = square.coords.x; j < square.coords.x + square.size && map[i][j]; ++j)
            map[i][j] = 'x';
    sm_puttab(map);
}

void find_square(char **map, coord_t size)
{
    square_t square;
    square.size = 0;

    find_biggest_square(map, size, &square);
    display_map(map, square);
    //sm_freetab(map);
}