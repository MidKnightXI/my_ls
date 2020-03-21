/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int scan_flag(int ac, char **av);
void my_putchar(char c);
int my_putstr(char const *str);

#endif /* !MY_H_ */