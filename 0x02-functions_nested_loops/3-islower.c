#include "main.h"
/**
* _islower - Shows 1 if lowercse and 0 otherwise
* @c: takes in a character in ASCII code
*
* Return: 0 for uppercase, 1 for lowercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
