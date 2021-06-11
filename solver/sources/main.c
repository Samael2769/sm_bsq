/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "sm_libc.h"
#include "bsq.h"

static const char help[] = {
    "BSQ: Find the biggest square in a map\n\n" \
    "USAGE:   ./bsq filepath\n"\
};

int main(int ac, char const * const av[])
{
    if (ac != 2) {
        return 84;
    }
    if (sm_strcmp("-h", av[1]) == 0)
        sm_putstr(help);
    if (bsq(av[1]) != 0)
        return 84;
    return 0;
}