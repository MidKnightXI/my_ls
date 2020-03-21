/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2019
** File description:
** scan.c
*/

int my_strlen(char *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++) {
    }
    return i;
}

int scan_arg(char *str)
{
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == 'l')
            return 0;
        if (str[i] == 'R')
            return 0;
        if (str[i] == 'd')
            return 0;
        if (str[i] == 'r')
            return 0;
        if (str[i] == 't')
            return 0;
    }
    return 0;
}

void choose_rule(int ac, char **av, int i)
{
    int n = my_strlen(av[1]);


    if (av[1][0] == '.' && av[1][1] == '/' && n == 2 && ac == 2) {
        my_ls("./");
    } else if (av[i][1] == '-') {
        scan_arg(av[i]);
    } else {
        my_putstr(av[i]);
        my_putstr(":\n");
        my_ls(av[i]);
    }
}

int scan_flag(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        choose_rule(ac, av, i);
        if (i < (ac - 1)) {
            my_putchar('\n');
        }
    }
    return 0;
}