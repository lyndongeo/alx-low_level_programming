#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Program that prints combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)




{
int first_number;
int second_number;

for (first_number = 0; first_number < 100; first_number++)
{
for (second_number = first_number + 1 ; second_number < 100; second_number++)
{

putchar (first_number / 10 + '0');
putchar (first_number % 10 + '0');


putchar (' ');

putchar (second_number / 10 + '0');
putchar (second_number % 10 + '0');


if (first_number == 98 && second_number == 99)
{
break;
}


putchar(',');
putchar(' ');


}

}

putchar('\n');


return (0);

}
