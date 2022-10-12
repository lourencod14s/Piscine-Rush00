/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:25:31 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/07/10 16:25:34 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

void	ft_putchar(char c);

void	ft_print_top(int x)
{
	int	i;

	ft_putchar('A');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	ft_print_sides(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j < y -1)
	{
		ft_putchar('B');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
			ft_putchar('B');
		ft_putchar('\n');
		j++;
	}
}

void	ft_print_bottom(int x)
{
	int	i;

	i = 1;
	ft_putchar('C');
	while (i < x -1)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_print_top(x);
	if (y != 1)
	{
		ft_print_sides(x, y);
		ft_print_bottom(x);
	}
}
