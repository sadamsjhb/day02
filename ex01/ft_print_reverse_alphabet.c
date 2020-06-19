/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:20:58 by sadams            #+#    #+#             */
/*   Updated: 2020/06/19 09:21:38 by sadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
