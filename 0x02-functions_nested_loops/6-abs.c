#include "holberton.h"
/**
 * abs- gives the absolute value of an integer.
 *
 * @n: inputs number as an integer.
 *
 * Return: absolute value
 */

int abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
}
