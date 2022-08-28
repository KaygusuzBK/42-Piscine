/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:46:52 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/08/02 20:51:28 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
 int        main(void)
 {
     printf("-3 ^-1 = %d (0)\n", ft_iterative_power(-3, -1));
     printf("-3 ^ 0 = %d (1)\n", ft_iterative_power(-3, 0));
     printf("3 ^ 3 = %d (27)\n", ft_iterative_power(3, 3));
     printf(" 0 ^-1 = %d (0)\n", ft_iterative_power(0, -1));
     printf(" 0 ^ 0 = %d (1)\n", ft_iterative_power(0, 0));
     printf(" 4 ^-1 = %d (0)\n", ft_iterative_power(4, -1));
 }
 */
