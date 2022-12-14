/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:39:54 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/08/02 20:55:51 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		res *= nb--;
	return (res);
}
/*
int        main(void)
{
    printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
    printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
    printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
    printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
    printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
    printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
}
*/
