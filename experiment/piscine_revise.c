/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piscine_revise.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:10 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

//A lot of experiment about solving math problem with recursion in c00
//, too bad I suck at math
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static int	putnbr_core(unsigned int nbr)
{
	if (nbr / 10)
		return (putnbr_core(nbr / 10) + ft_putchar((nbr % 10) + '0'));
	else
		return (ft_putchar(nbr + '0'));
}

int	ft_putnbr(int nbr)
{
	if (nbr < 0)
		return (ft_putchar('-') + putnbr_core(-nbr));
	else
		return (putnbr_core(nbr));
}

//putnbr
// int	main(void)
// {
// 	for (unsigned int nbr = 1; nbr <= (unsigned int)-1; nbr++)
// 		ft_printf("\nreturn: %d\n", ft_putnbr(nbr));
// 	// for (int nbr = -1; nbr >= -100; nbr--)
// 	// 	ft_printf("\nreturn: %d\n", ft_putnbr(nbr));
// 	return (0);
// }

void	ft_putstr(const char *str)
{
	write(1, str, strlen(str));
}

void	ft_putendl(const char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

void	ft_printn(int nbr, int n)
{
	if (--n)
	{
		ft_printn(nbr / 10, n);
		nbr %= 10;
	}
	ft_putchar(nbr + '0');
}

int	ft_nbrsize(int nbr)
{
	if (nbr / 10)
		return (1 + ft_nbrsize(nbr / 10));
	return (1);
}

void	ft_print_combn(int n)
{
	int		nbr;

	if (!(n >= 1 && n <= 9))
		return ;
	nbr = 0;
	while (ft_nbrsize(nbr) <= n)
	{
		ft_printn(nbr++, n);
		ft_putchar('\n');
	}
}

void	ft_printcomb(void)
{
	char	str[4];

	str[3] = 0;
	str[0] = '0';
	while (str[0] <= '9')
	{
		str[1] = str[0] + 1;
		while(str[1] <= '9')
		{
			str[2] = str[1] + 1;
			while(str[2] <= '9')
			{
				ft_putstr(str);
				ft_putstr(", ");
				str[2]++;
			}
			str[1]++;
		}
		str[0]++;
	}
}

int	within(int nbr, unsigned int comb)
{
	if (!nbr)
		return (0);
	while (comb-- && nbr)
		nbr /= 10;
	return (!nbr);
}

int	getlarge(int nbr)
{
	while (nbr / 10)
		nbr /= 10;
	return (nbr);
}

int	power(int nbr, int power)
{
	int	output;

	output = 1;
	if (power < 0)
		return (0);
	else if (!nbr && !power)
		return (1);
	while (power--)
		output = (output * nbr);
	return (output);
}

void	ft_recomb(int nbr, int comb)
{
	if (nbr < 0)
		return ;
	else if (nbr == 0)
		(void)nbr;
	else if (!within(nbr, comb))
		return ;
	// printf("pass: %d\n", nbr);
	while (nbr % 10)
	{
		ft_recomb((nbr * 10) + (nbr % 10) + 1, comb);
		if (nbr > 100)
			printf("nbr: %d\n", nbr);
		nbr++;
	}
}

void	ft_printcomb_re(void)
{
	int	nbr;

	ft_recomb(nbr, 3);
}

void	printw(int prev, int comb)
{
	int	a;

	a = prev + 1;
	if (a < power(10, comb))
		while (a % 10 < 9 - comb)
			printw(a + ((a / 10) % 10), comb);
	else
		while (a % 10)
			printf("printw: %d\n", a++);
	{
		// printf("a: %d, a %% 10: %d\n", a, a % 10);
	}
	// while (a < 9)
	// {
	// 	printw((a * 10), comb);
	// 	a++;
	// }
}
int	main(void)
{
	// for (int comb = 1; comb <= 3; comb++)
	// {
	// 	printf("COMB: %d\n", comb);
	// 	for (int nbr = 0; nbr <= 100; nbr++)
	// 	{
	// 	}
	// }
	// ft_recomb(1, 3);
	printw(0, 2);
	// for (int nbr = 1; nbr < 10; nbr ++)
	// 	ft_print_combn(nbr);
	// ft_print_combn(2);
	// ft_printcomb();
}
