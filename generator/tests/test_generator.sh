#!/usr/bin/bash
##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## test_generator
##

test()
{
    ./bsq_gen $1 $2 > .test
    ./bsq .test > .dup

    if [[ $? == 0 ]]
    then
        echo -ne "\e[1;4;32mTest Passed\n\e[0m"
    else
        echo "Not ok"
    fi
}

test 10 10
test 100 100
test 1000 1000
test 10000 100
test 50 50
test 1 1
test 2 2
test 100 32
test 1 35
test 10 400
test 70 10

rm .test
rm .dup