#include "shellsh.h"
/**
* *_cpystr - check code
* @dest: pointer to a char
* @src: pointer to a char
* Description:  a function that copies the string pointed to by src
* , including the terminating null byte (\0), to the buffer
* pointed to by dest.
*
* Return: dest
*/


char *_cpystr(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
