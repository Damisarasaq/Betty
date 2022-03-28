#include "main.h"
/**
* main - prints _putchar
* Description: prints _putchar
* Return: 0 (Success)
*/
int main(void)
{
char str[] = "_putchar";
int i;
i = 0;
while (str[i])
{
_putchar(str[i]);
++i;
}
_putchar('\n');
return (0);
}
