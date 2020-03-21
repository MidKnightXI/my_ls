/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays characters from a string
*/
void my_putchar(char c);

int my_putstr(char const *str)
{
    int count = 0;

    for (count; str[count] != '\0'; count++) {
        my_putchar(str[count]);
    }
    return count;
}