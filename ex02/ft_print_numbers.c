/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:23:35 by sadams            #+#    #+#             */
/*   Updated: 2020/06/19 09:24:02 by sadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
