#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Program that prints the alphabets in reverse
 * Return: 0 (Success)
 */

int main(void)

{
char alphabet;

for (alphabet = 122; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}

putchar('\n');

return (0);

}
