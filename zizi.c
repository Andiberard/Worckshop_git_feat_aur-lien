/*
** EPITECH PROJECT, 2023
** Worckshop_git_feat_aur-lien
** File description:
** zizi.c
*/

#include <unistd.h>

void hello_world(void)
{
    write(1, "Hello World !!\n", 15);
}

int main (void)
{
    hello_world();
    return 0;
}