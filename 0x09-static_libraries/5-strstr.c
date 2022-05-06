#include <stdio.h>
#include "main.h"
/**
* _strstr - function that locates a substring
* @haystack: string to search in
* @needle: substring to find in string
* Return: pointer to begin at substring or null
*/
char *_strstr(char *haystack, char *needle)
{
int c = 0;
int c2 = 0;

if (needle[0] == '\0')
{
return (&haystack[0]);
}

while (haystack[c])
{
if (haystack[c] == needle[c2])
{
c++;
c2++;

if (needle[c2] == '\0')
return (&haystack[c - c2]);
}
else
{
c++;
c = (c - c2);
c2 = 0;
}
}
return ('\0');
}
