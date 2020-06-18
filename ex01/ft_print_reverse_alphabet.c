#include <unistd.h>

void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
char alphabet;

alphabet = 'z';
while(alphabet >= 'a')
{
ft_putchar(alphabet);
alphabet--;
}
}
