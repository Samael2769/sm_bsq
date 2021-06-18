#!/usr/bin/bash
##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## test_bsq
##

test()
{
    solved=(maps/mouli_maps_solved/*)
    unsolved=(maps/mouli_maps/*)
    size=${#solved[@]}
    index=0

    while (( index < size ))
    do
        echo -ne "\e[1;33m${unsolved[$index]}\n\e[0m"
        ./bsq ${unsolved[$index]} > .got
        cat ${solved[$index]} > .expected
        diff .got .expected
        if [[ $? == 0 ]]
        then
            echo -ne "\e[1;4;32mTest Passed\n\e[0m"
        else
            echo "Not Ok"
        fi
        ((index+=1))
    done

}

test

rm .got .expected