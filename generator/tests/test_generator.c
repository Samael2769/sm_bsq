/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** test_generator
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "generator.h"
#include "struct.h"

static const char str[] = {
    "4\n"
    "....\n"
    "....\n"
    "....\n"
    "....\n"  
};

static const char str2[] = {
    "4\n"
    "oooo\n"
    "oooo\n"
    "oooo\n"
    "oooo\n"  
};

Test(generator, test_normal, .init=cr_redirect_stdout)
{
    gen_t gen;

    gen.cols = 4;
    gen.rows = 4;
    gen.percent = 0;
    map_generator(&gen);
    cr_assert_stdout_eq_str(str);
}

Test(generator, test_full, .init=cr_redirect_stdout)
{
    gen_t gen;

    gen.cols = 4;
    gen.rows = 4;
    gen.percent = 100;
    map_generator(&gen);
    cr_assert_stdout_eq_str(str2);
}