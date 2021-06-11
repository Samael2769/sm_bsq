/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_libc
*/

#ifndef SM_LIBC_H_
#define SM_LIBC_H_
#include <stddef.h>

char *read_file(char const *filepath);
char **sm_strtoarr(char *str, char pars);
char *sm_strcpy(char *dest, char const *src);
char *sm_strdup(char const *str);
size_t sm_strlen(char const *str);
int sm_strcmp(char const *str1, char const *str2);
int sm_putstr(char const *str);

#endif /* !SM_LIBC_H_ */
