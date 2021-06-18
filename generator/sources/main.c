/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "sm_libc.h"
#include "struct.h"
#include "generator.h"
#include <stdlib.h>

static const char help[] = {
    "BSQ GENERATOR: generate a BSQ map\n\n"\
    "USAGE:   ./bsq_gen rows cols [percent]\n"\
    "percent is random by default\n"
};

static int get_args(int ac, char * const av[], gen_t *gen)
{
    gen->rows = sm_atoi(av[1]);
    gen->cols = sm_atoi(av[2]);
    if (gen->rows <= 0 || gen->cols <= 0)
        return -1;
    if (ac > 3) {
        gen->percent = sm_atoi(av[3]);
        if (gen->percent < 0 || gen->percent > 100)
            return -1;
    } else
        gen->percent = rand() % 100;
    return 0;
}

int main(int ac, char * const av[])
{
    gen_t gen;

    srand((unsigned long int)&gen);
    if (ac == 2 && sm_strcmp(av[1], "-h") == 0) {
        sm_putstr(help);
        return 0;
    }
    if (ac < 3 || ac > 4)
        return 84;
    if (get_args(ac, av, &gen) != 0)
        return 84;
    map_generator(&gen);
    return 0;
}