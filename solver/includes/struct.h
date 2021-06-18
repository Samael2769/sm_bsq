#pragma once

typedef struct coord_s {
    int x;
    int y;
} coord_t;

typedef struct square_s {
    int size;
    coord_t coords;
} square_t;