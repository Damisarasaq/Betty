#include <stdio.h>
/**
 *main-Print all the letters except q and e
 *You can only use the putchar function
 *Return:0
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
  if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
