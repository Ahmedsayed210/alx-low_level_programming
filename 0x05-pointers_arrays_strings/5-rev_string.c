#include"main.h"
/**
 * rev_string - reverses a string
 *
 * @s: char to check
 *
 * return = 0 success
*/
void rev_string(char *s)
{
char temp;
size_t len = strlen(str) - 1;
size_t i;
size_t k = len;
for (i = 0; i < len; i++)
{
temp = str[k];
str[k] = str[i];
str[i] = temp;
k--;
if (k == (len / 2))
{
break;
}
}
}
