/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:08:06 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/07/25 10:39:16 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
 int    main()
 {
     int    x;
     int    y;
     
     x = 2;
     y = 3;
     ft_swap(&x, &y);
     printf("%d \n", x);
     printf("%d", y);
 }
 */
