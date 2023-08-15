#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
*/
void print_alphabet_x10(void)
{
for (int a = 97; a <= 122; a++)
putchar(a);
}
int main(void)
{
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
return (0);
}
