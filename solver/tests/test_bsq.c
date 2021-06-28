/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** test_bsq
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "bsq.h"
#include "struct.h"

Test(bsq, test1, .init=cr_redirect_stdout)
{
    int nb = bsq("../maps/map_test");
    cr_assert_eq(nb, 0);
}

Test(bsq, test_err1, .init=cr_redirect_stdout)
{
    int nb = bsq("../maps/ma_test");
    cr_assert_eq(nb, -1);
}

Test(bsq, test_err2, .init=cr_redirect_stdout)
{
    int nb = bsq("../maps/map_err1");
    cr_assert_eq(nb, -1);
}

Test(bsq, test_err3, .init=cr_redirect_stdout)
{
    int nb = bsq("../maps/map_err2");
    cr_assert_eq(nb, -1);
}

Test(bsq, test_err4, .init=cr_redirect_stdout)
{
    int nb = bsq("../maps/map_err3");
    cr_assert_eq(nb, -1);
}