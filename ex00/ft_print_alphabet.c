/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:17:52 by sadams            #+#    #+#             */
/*   Updated: 2020/06/19 09:18:59 by sadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_alphabet(void)
{
	char alphabet;

alphabet = 'a';
while (alphabet <= 'z')
{
	ft_putchar(alphabet);
	alphabet++; 
}
}
