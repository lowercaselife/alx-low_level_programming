#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0 (success)
 */


int main(void)
{
char a_character;
int a_integer;
long a_long;
long long a_longlong;
float a_float;
printf("sizeof char: %lu byte(s)/n", sizeof(a_character));
printf("sizeof an int: %lu byte(s)/n", sizeof(a_integer));
printf("sizeof a long int: %lu byte(s)/n", sizeof(a_long));
printf("sizeof a long long int: %lu byte(s)/n", sizeof(a_longlong));
printf("sizeof a float: %lu byte(s)/n", sizeof(a_float));
return (0);

}
