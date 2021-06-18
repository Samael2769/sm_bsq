/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** get_size
*/

#include <stdlib.h>
#include "sm_libc.h"

int get_cols(char *buff)
{
    int cols = atoi(buff);

    return cols;
}

int get_rows(char *buff)
{
    int rows = 0;
    int i = 0;

    for (i = 0; buff[i] != '\n'; ++i);
    ++i;
    for (; buff[i] != '\n' && buff[i] != '\0'; ++i)
        rows++;
    return rows;
}

char *set_map(char *stream)
{
    int i = 0;

    for (i = 0; stream[i] != '\n'; ++i);
    stream = stream + i + 1;
    stream[sm_strlen(stream) - 1] = '\0';
    return stream;
}