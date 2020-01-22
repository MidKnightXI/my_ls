/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2019
** File description:
** main.c
*/
#include "./include/my.h"
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>

int check_file(DIR *repo, struct dirent *readen_file, char *str)
{
    struct stat check;

    if (repo == NULL && stat(str, &check) != -1) {
        my_putstr(str);
        my_putchar('\n');
        exit(0);
    } else if (repo == NULL) {
        my_putstr("my_ls: cannot access '");
        my_putstr(str);
        my_putstr("': No such file or directory\n");
        exit(84);
    } else
        return 0;
}
int work_ls(DIR *repo, struct dirent *readen_file)
{
    readen_file = readdir(repo);
    for (;readen_file != NULL; readen_file = readdir(repo)) {
        if (readen_file->d_name[0] == '.') {
        } else {
        my_putstr(readen_file->d_name);
        my_putchar('\n');
        }
    }
    if (closedir(repo) == -1) {
        my_putstr("ERROR: can't close directory\n");
        exit(84);
    }
}
int my_ls(char *str)
{
    DIR *repo = opendir(str);
    struct dirent* readen_file = NULL;

    check_file(repo, readen_file, str);
    work_ls(repo, readen_file);
    return 0;
}
int main(int ac, char **av)
{
    if (ac == 1)
        return (my_ls("./"));
    if (ac >= 2)
        return (scan_flag(ac, av));
}