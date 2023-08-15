#include "main.h"
/*
 *main - Entry point
 *
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
for (int a = 97; a <= 122; a++)
{
putchar(a);
putchar('\n');
}
}
int main(void)
{
print_alphabet();
}
