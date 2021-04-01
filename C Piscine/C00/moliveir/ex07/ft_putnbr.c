/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:52:02 by moliveir          #+#    #+#             */
/*   Updated: 2021/01/12 11:28:51 by alopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
	{
		ft_putchar('0' + nb);
	}
	else if (nb > 10)
	{
		ft_putchar('0' + (nb / 10));
		ft_putchar('0' + (nb % 10));
	}
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		ft_putchar('0' + (nb / 10));
		ft_putchar('0' + (nb % 10));
	}
}

int main (void)
{
	ft_putnbr(700);
}
