#include "main.h"

/**
 * main - program that prints _putchar
 * Description: prints _putchar
 * Return: always 0 (Success)
 *
 */

int main(void)
{

char i[] = "_putchar\n";
int j;

for (j = 0; j <= 8; j++)
{
_putchar(i[j]);
}
return (0);
}
