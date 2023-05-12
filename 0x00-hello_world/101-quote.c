#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a string to the standard error
 * Return: Always 1 (Error)
 */

int main(void)
{
        const char *str = "and that piece of art is useful\" "
                          "- Dora Korpar, 2015-10-19\n";

        /* write the string to the standard error (file descriptor 2) */
        write(2, str, 59);

        return (1);
}

