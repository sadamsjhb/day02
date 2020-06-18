#include <unistd.h>

void ft_putchar(int c);

void ft_print_numbers(void)
{
int digit;
digit = '0';

while(digit <= '9')
{
ft_putchar(digit);
digit++;
}
}
