/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:35:23 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/23 11:35:57 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_print_reverse_alphabet(void) {

	char letter;
	letter = 'z';
	while (letter >= 'a') {
		ft_putchar(letter);
    	letter--;
	}

