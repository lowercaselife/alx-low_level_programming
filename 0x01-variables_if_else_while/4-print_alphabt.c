#include <stdio.h>

/**
* main - entry point
*
* Return: always 0(success)
*/
int main(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
if (l != 'e' && l != 'q')
putchar(l);
}
putchar('\n');

return (0);
}
