/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alignment_together.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:49:21 by iyarikan          #+#    #+#             */
/*   Updated: 2022/06/13 21:49:30 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_together(t_swap *a, t_swap *b, int control)
{
	if (!control)
	{
		swap(a, 1);
		swap(b, 1);
		ft_printf("ss\n");
	}
}

void	rotate_together(t_swap *a, t_swap *b, int control)
{
	if (!control)
	{
		rotate(a, 1);
		rotate(b, 1);
		ft_printf("rr\n");
	}
}

void	rev_rotate_together(t_swap *a, t_swap *b, int control)
{
	if (!control)
	{
		rev_rotate(a, 1);
		rev_rotate(b, 1);
		ft_printf("rrr\n");
	}
}
