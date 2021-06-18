/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_tablen
*/

#include <stddef.h>

int sm_tablen(char **tab)
{
    int count = 1;

    for (int i = 0; tab[i] != NULL; ++i) {
        count++;
    }
    return (count);
}