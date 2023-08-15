#include "main.h"
/**
* print_alphabet - the function the code,
*
* Return : Always 0,
*
* main - the key the code
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);
_putchar ('\n');
}
}
int main(void)
{
print_alphabet();
return (0);
}
