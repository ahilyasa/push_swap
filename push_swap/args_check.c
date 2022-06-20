/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:50:14 by iyarikan          #+#    #+#             */
/*   Updated: 2022/06/13 21:50:24 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//duplicated control
void	check_double(t_swap *a, t_swap *b)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		j = i;
		while (j < a->size - 1)
		{
			if (a->array[i] == a->array[j++ + 1])
				error_message(a, b);
		}
		i++;
	}
}

//sequential or not?
void	check_list(t_swap *a, t_swap *b)
{
	int	i;
	int	counter;

	i = -1;
	counter = 1;
	while (++i < a->size - 1)
	{
		if (a->array[i] < a->array[i + 1])
			counter = 0;
	}
	if (counter == 1)
		free_func(a, b);
}
