/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:40:46 by moliveir          #+#    #+#             */
/*   Updated: 2021/01/11 19:06:37 by moliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_p;
char g_v[10];

void	print_end(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	print_int(int prev, int n)
{
	int i;

	if (n == g_p)
	{
		write(1, g_v, g_p);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - g_p + n)
	{
		g_v[n] = '0' + i;
		print_int(i, n + 1);
	}
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	g_p = n;
	while (i < 10 - n)
	{
		g_v[0] = '0' + i;
		print_int(i++, 1);
	}
	print_end(i);
}
