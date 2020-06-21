/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:48:25 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/19 15:56:14 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print_alphabet.h"
#include "ft_putchar.c"

void ft_print_alphabet() {
	char letter;
	letter = 'a';

	while(letter <= 'z') {
		ft_putchar(letter);
		letter++;
	}
	ft_putchar('\n');
}


