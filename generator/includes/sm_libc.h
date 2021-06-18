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
char **sm_bsqstrtoarr(char *buff, int x, int y);
char *sm_strcpy(char *dest, char const *src);
char *sm_strdup(char const *str);
size_t sm_strlen(char const *str);
int sm_strcmp(char const *str1, char const *str2);
int sm_putstr(char const *str);
int sm_tablen(char **tab);
void sm_puttab(char **tab);
void sm_freetab(char **tab);
int sm_atoi(char *str);
char *sm_itoa(int nb);
char *sm_strconcat(char *dest, char const *src);
void *sm_calloc(size_t nmemb, size_t size);

#endif /* !SM_LIBC_H_ */
