#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int ahmed = 0, menna = 0;

	while (haystack[ahmed])
	{
		while (needle[menna] && (haystack[ahmed] == needle[0]))
		{
			if (haystack[ahmed + menna] == needle[menna])
				menna++;
			else
				break;
		}
		if (needle[menna])
		{
			ahmed++;
			menna = 0;
		}
		else
			return (haystack + ahmed);
	}
	return (0);
}
