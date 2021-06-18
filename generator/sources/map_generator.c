/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** map_generator
*/

#include "sm_libc.h"
#include "struct.h"
#include <stdlib.h>
#include <unistd.h>

void map_generator(gen_t *gen)
{
    int perc = 0;

    sm_putstr(sm_itoa(gen->cols));
    write(1, "\n", 1);
    for (int i = 0; i < gen->cols; ++i) {
        for (int j = 0; j < gen->rows; ++j) {
            perc = rand() % 100;
            if (perc < gen->percent)
                write(1, "o", 1);
            else
                write(1, ".", 1);
        }
        write(1, "\n", 1);
    }
}