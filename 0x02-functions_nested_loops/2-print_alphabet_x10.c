#include "main.h"

/**
 * print_alphabet_x10 -print alphabet 10 times
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
int alphabet;
int times;


times = 0;
while (times < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

times++;
_putchar('\n');
}


}
