/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:51:26 by almarti3          #+#    #+#             */
/*   Updated: 2024/02/29 20:52:22 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	ch;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		digit = nb % 10 + '0';
		write(1, &digit, 1);
	}
}

/*
int main(void)
{
    ft_putnbr(42);
    write(1, "\n", 1);
    return (0);
}
*/
