#pragma once

#include "struct.h"

int bsq(char const *filepath);
int get_cols(char *buff);
int get_rows(char *buff);
char *set_map(char *stream);

int error_handling(char *tab, coord_t size);
void find_square(char **map, coord_t size);