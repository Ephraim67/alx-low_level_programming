#include <stdio.h>

/**
 * main - Prints all lowercase and uppercase.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
char letter;
/*prints lowercase letters */
for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

/*prints uppercase letters */

for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);

putchar('\n');

return (0);
}
