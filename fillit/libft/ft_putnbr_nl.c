/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 21:54:34 by brzamora          #+#    #+#             */
/*   Updated: 2019/11/14 17:46:09 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_nl(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648\n");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr_nl(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr_nl(n / 10);
		ft_putchar(n % 10 + '0');
		ft_putchar('\n');
	}
	else
		ft_putchar(n + '0');
}
