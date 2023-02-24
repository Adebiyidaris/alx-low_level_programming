#include "main.h"

/**
*_isupper - Check if a letter is upper
*@c: The number to be checked
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
