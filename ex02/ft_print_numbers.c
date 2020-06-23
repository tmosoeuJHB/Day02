/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:38:48 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/23 13:43:14 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_putchar(char c);
void ft_print_numbers(void) {
	char digits;
	digits = '0';
	while (digits <= '9') {
		ft_putchar(digits);
		digits++;
	}
}


