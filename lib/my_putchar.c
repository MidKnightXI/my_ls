/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_putchar.c
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}