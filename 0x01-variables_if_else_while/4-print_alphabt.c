#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Declaration: Program that prints the alphabet in lowercase
 * Followed by a new line
 * Return: 0 (Success)
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);

}
